//Remove Stones to Minimize the Total
https://leetcode.com/problems/remove-stones-to-minimize-the-total/submissions/

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxh;
        for(int i=0;i<piles.size();i++){
           maxh.push(piles[i]);
        }
        while(maxh.size()>0 and k--){
            int x=maxh.top();
            maxh.pop();
            x -=x/2;
            maxh.push(x);
        }
        int ans=0;
        while(maxh.size()>0){
            ans+=maxh.top();
            maxh.pop();
        }
     return ans;
    }
};


