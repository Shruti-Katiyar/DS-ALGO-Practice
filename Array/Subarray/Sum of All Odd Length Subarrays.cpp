//Sum of All Odd Length Subarrays
https://leetcode.com/problems/sum-of-all-odd-length-subarrays/submissions/

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int s=1; s<=arr.size(); s+=2){
            for(int i=0; i+s<=arr.size(); i++){
                for(int j=i; j<i+s; j++){
                    sum+=arr[j];
                }
            }
        }
        return sum;
        
    }
};
