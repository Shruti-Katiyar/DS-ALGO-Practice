//Maximum average subarray
https://practice.geeksforgeeks.org/problems/maximum-average-subarray5859/1#

class Solution{   
public:
    int findMaxAverage(int arr[], int n, int k) {
        // code here
      int  avg=accumulate(arr,arr+k,0);
      int sum=avg;
      int idx=0;
      for(int i=k;i<n;i++){
          //add cur idx remove last one
          avg += arr[i]-arr[i-k];//subtract last idx to first idx
          if(avg>sum){
          sum=avg;
          idx=i-k+1;
          }
      }
      return idx;
    }
    
};
//avg=sum/tatal no
