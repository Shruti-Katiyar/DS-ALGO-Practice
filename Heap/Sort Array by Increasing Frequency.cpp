//Sort Array by Increasing Frequency
https://leetcode.com/problems/sort-array-by-increasing-frequency/submissions/

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>> maxh;
        for(auto it : m){
            maxh.push({-it.second,it.first});
        }
       
        vector<int> ans;
        while(maxh.size()>0){
            int x = maxh.top().first;
            for(int i=0;i<abs(x);i++){
                ans.push_back(maxh.top().second);
            }
            maxh.pop();
        }
        return ans;
    }
};
