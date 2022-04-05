//Top K Frequent Elements
https://leetcode.com/problems/top-k-frequent-elements/submissions/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;

     
         unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i=m.begin(); i!=m.end();i++){
            minh.push({i->second,i->first});
            if(minh.size()>k)
            minh.pop();
        }
    
        vector<int> ans;
        while(minh.size()>0){
            ans.push_back(minh.top().second);
            minh.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }   
    
};
