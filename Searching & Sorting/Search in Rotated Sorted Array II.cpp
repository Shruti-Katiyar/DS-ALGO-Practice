//Search in Rotated Sorted Array II
https://leetcode.com/problems/search-in-rotated-sorted-array-ii/submissions/

class Solution {
public:
    //this problem allow duplicates
    
    
    bool search(vector<int>& nums, int key) {
         	int n = nums.size();

	//Logic
	int s = 0;
	int e = n - 1;

	while(s<=e){
		int mid = (s+e)/2;

		if(nums[mid]==key){
			return true;
		}
  //When number at low, high and mid are all equal, then it's not possible to correctly find out which side is sorted.
//Example: Input: [1,0,1,1,1] , 0
//So we can do low++ and high-- and then reuse the same code.      
         if(nums[s] == nums[mid] and nums[mid] == nums[e])
            {
                s++, e--;
                continue;
            }

		//2 cases
		if(nums[s]<=nums[mid]){
			//left
			if(key>=nums[s] and key<=nums[mid]){
				e = mid - 1;
			}
			else{
				s = mid + 1;
			}

		}
		else{
			//right

			if(key>=nums[mid] and key<=nums[e]){
				s = mid + 1;
			}
			else{
				e = mid - 1;
			}

		}

	}
	return false;
    }
};
