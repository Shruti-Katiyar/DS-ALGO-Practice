//Maximum Subarray or Kadane's Algorithm 
https://leetcode.com/problems/maximum-subarray/
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#

class Solution{
    public:
  
       long long maxSubarraySum(int arr[], int n){
         int sum=0; 
         int maxsum=INT_MIN; 
       for(int i=0;i<n;i++){
           sum=sum+arr[i];
           maxsum=max(maxsum,sum);

       if(sum<0){
           sum=0;
         }
      }
      return maxsum;
   
        
    }
};



