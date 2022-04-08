//K largest elements 
https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1/?page=1&category[]=Heap&sortBy=submissions#

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int> ans;
        priority_queue<int,vector<int>,greater<int>> minh;
        for(int i=0;i<k;i++){
            minh.push(arr[i]);
        }
           for(int i=k;i<n;i++){
               if(minh.top()<=arr[i]){
               minh.pop();
               minh.push(arr[i]);
              }
           }
            while(minh.size()>0){
              ans.push_back(minh.top());
              minh.pop();
            }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
