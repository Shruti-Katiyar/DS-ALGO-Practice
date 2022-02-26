//Permutations
https://leetcode.com/problems/permutations/submissions/

class Solution {
public:
    void solve(vector<int> &ds,vector<int> &nums, vector<vector<int>> &ans, int freq[] ){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return ;
            
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                solve(ds,nums,ans,freq);
                freq[i]=0;
                ds.pop_back();//backtrack
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int> > ans;
        int freq[nums.size()];
        
        for(int i=0;i<nums.size();i++)
            freq[i]=0;
        solve(ds,nums,ans,freq);
        return ans;
        
    }
};
//tc: n!*n
//sc: n

//another approach

class Solution {
public:
    void solve(int idx,vector<int> &nums,vector<vector<int> >&ans){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            solve(idx+1,nums,ans);
            swap(nums[idx],nums[i]);//backtrack
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> >ans;
        solve(0,nums,ans);
        return ans;
        
    }
};


