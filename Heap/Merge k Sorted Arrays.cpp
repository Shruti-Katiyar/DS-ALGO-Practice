//Merge k Sorted Arrays
https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1/?page=1&category[]=Heap&sortBy=submissions#

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        vector<int> ans;
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++)
            ans.push_back(arr[i][j]);
        }
        //push all the no in vector then sort it
        sort(ans.begin(),ans.end());
        return ans;
    }
};


///////////////////////////////using heap//////////////////////////////////

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>minh;
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++)
            minh.push(arr[i][j]);
        }
        while(minh.size()>0){
            ans.push_back(minh.top());
            minh.pop();
        }
        return ans;
        
    }
};


