//Combination Sum III
https://leetcode.com/problems/combination-sum-iii/submissions/

class Solution {
public:
    vector<vector<int> >ans;
    void solve(vector<int>&x,int k,int n,int start,int sum=0){
        //base
        if(sum==n && k==0){
            ans.push_back(x);
            return;
        }
        if(sum>n || k<=0)
            return;
        
        //rec
        for(int i=start;i<=9;i++){
            if(i+sum<=n){
                x.push_back(i);
                solve(x,k-1,n,i+1,sum+i);
                x.pop_back();//backtracking
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> x;
        solve(x,k,n,1);
        return ans;
    }
};
