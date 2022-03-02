//Sort Colors or Sort an array of 0s, 1s and 2s
https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
    	
    	//Dutch National Flag ALgo
    	// toward left side of low  all the no will be 0's
    	//right side of high all the no will be 2's
    	//low to mid-1 will be 1's
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low++],nums[mid++]);
                continue;
                
            }
            if(nums[mid]==1){
                mid++;
                continue;
            }
           if(nums[mid]==2){
               swap(nums[mid],nums[high--]);
               continue;
           }
            
            
        }
        
    }
};
