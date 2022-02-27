//Subset Sums 
https://practice.geeksforgeeks.org/problems/subset-sums2234/1#

class Solution
{
public:
void solve(int idx,int sum,vector<int> &arr,int N,vector<int>&ans){
    if(idx==N){
        ans.push_back(sum);
        return;
    }
    //pick the element
    solve(idx+1,sum+arr[idx],arr,N,ans);
    //not pick
    solve(idx+1,sum,arr,N,ans);
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        solve(0,0,arr,N,ans);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

