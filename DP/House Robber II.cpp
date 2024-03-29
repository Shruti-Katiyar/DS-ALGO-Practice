//House Robber 2
https://leetcode.com/problems/house-robber-ii/submissions/

class Solution {
public:
      int solve(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        
        vector<int> a(n);
        if(n>=1)
            a[0]=nums[0];
        if(n>=2)
            a[1]=max(nums[0],nums[1]);
        
            for(int i=2;i<n;i++){
                a[i]=max(a[i-1],a[i-2]+nums[i]);
            }
        return a[n-1];
    }
    
    int rob(vector<int>& nums) {
        if(nums.size()==0)return 0;
        if(nums.size()==1)return nums[0];
      
        vector<int> v1(nums.begin(), nums.end()-1);
        vector<int> v2(nums.begin()+1, nums.end());
        return max(solve(v1), solve(v2));
    }
};
