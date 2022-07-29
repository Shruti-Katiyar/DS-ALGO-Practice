//Missing Number
//https://leetcode.com/problems/missing-number/
class Solution {
public:
  	int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int ans = n;
        
        for(int i = 0 ; i < n ; i++){
            
            if(nums[i] != i){
                ans = i;
                break;
            }
            
        }
        
        return ans;
        
    }
};
//tc:o(nlogn)

class Solution {
public:
  	int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
        }
        //sum of  1 to n numbers will be n(n+1)/2;
        int original_sum=n*(n+1)/2;
        
        int ans=original_sum-sum;
        
        return ans;
     
    }
};
//TC:o(n)
