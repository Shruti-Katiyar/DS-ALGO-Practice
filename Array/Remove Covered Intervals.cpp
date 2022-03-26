//Remove Covered Intervals
https://leetcode.com/problems/remove-covered-intervals/submissions/

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& nums) {
        int cnt=0;
        int  c=-1;//left
        int  d=-1;//right
        sort(nums.begin(),nums.end());
        for(auto &x:nums){
            if(x[0]>c and x[1]>d){
                c=x[0];
                cnt++;
            }
            d=max(d,x[1]);
        }
        return cnt;
    }
};
