//Richest Customer Wealth
https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& nums) {
        int maxwealth=0;
        int row=nums.size();
        int col=nums[0].size();
        
        for(int i=0;i<row;i++){//iterating in each row
            int wealth=0;
            for(int j=0;j<col;j++){//calculating sum of the columns
                wealth+=nums[i][j];
            }
            maxwealth=max(wealth,maxwealth);
        }
        return maxwealth;
    }
};
//TC:O(row*col)
//sc:O(1)
