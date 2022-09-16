//Maximum Score from Performing Multiplication Operations
//https://leetcode.com/problems/maximum-score-from-performing-multiplication-operations/submissions/

class Solution {
public:
    int f(int i,int l,int r,vector<int>&nums,vector<int>&multipliers){
        //base case
        if(i==multipliers.size()){
            return 0;
        }
        //rec
        int left=multipliers[i]*nums[l] + f(i+1,l+1, r, nums,multipliers);
        int right=multipliers[i]*nums[r] + f(i+1,l,r-1,nums,multipliers);
        
        return max(left,right);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size();
        return f(0,0,n-1,nums,multipliers);
        
    }
};

////topdown


