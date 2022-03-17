//Largest Perimeter Triangle
https://leetcode.com/problems/largest-perimeter-triangle/submissions/

class Solution {
public:
    //triangle property: sum of its 2 sides should be bequal to 3rd side
    //   a+b>c 
    // a<b<c
    //sort kr lay arr ko then try kro ki possible h triangle form krna ya nh
    int largestPerimeter(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]+nums[i+1]>nums[i+2]){
                sum=max(sum,nums[i]+nums[i+1]+nums[i+2]);
            }
        }
        return sum;
    }
};
