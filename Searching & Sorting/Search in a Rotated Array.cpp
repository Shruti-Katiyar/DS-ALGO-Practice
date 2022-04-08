//Search in a Rotated Array
https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1#
https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int search(vector<int>& nums, int key) {
        	int n = nums.size();

	//Logic
	int s = 0;
	int e = n - 1;

	while(s<=e){
		int mid = (s+e)/2;//finding mid value
        
        //1 case
		if(nums[mid]==key){//if target is found in mid then return mid
			return mid;
		}

		//2 cases
		//left  half is sorted or not 
		if(nums[s]<=nums[mid]){
			//check if elemnt lies on left half or not
			if(key>=nums[s] and key<=nums[mid]){
				e = mid - 1;
			}
			else{
				s = mid + 1;
			}

		}
		else{
			//right half is sorted

			if(key>=nums[mid] and key<=nums[e]){
				s = mid + 1;
			}
			else{
				e = mid - 1;
			}

		}

	}
	return -1;


    }
};

