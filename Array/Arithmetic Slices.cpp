//Arithmetic Slices
https://leetcode.com/problems/arithmetic-slices/submissions/

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int cur=0;
        int total=0;
        
        for(int i=2;i<nums.size();i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                cur++;
                total=total+cur;
            }
            else{
                cur=0;//reset the cur
            }
        }
        return total;//this will store no of subarray form
    }
};
