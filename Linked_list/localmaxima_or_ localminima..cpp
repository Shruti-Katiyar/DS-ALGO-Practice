//Find the Minimum and Maximum Number of Nodes Between Critical Points
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head || !head->next ||!head->next->next){
            return{-1,-1};
        }
        ListNode*prev=head;
        ListNode*cur=prev->next;
        ListNode*nxt=cur->next;
        
        vector<int> v;
        int cnt=1;
        
        while(nxt){
            //check local maxima  and local minima
            if((cur->val >prev->val and cur->val >nxt->val)|| (cur->val <prev->val and cur->val <nxt->val))
                v.push_back(cnt);
            cnt++;
            prev=cur;
            cur=nxt;
            nxt=nxt->next;
        }
        
        if(v.size()<2) 
            return{-1,-1};
        
        int min_distance=INT_MAX;
        for(int i=1;i<v.size();i++)
            min_distance=min(min_distance,v[i] - v[i-1]);
            
            return {min_distance,v.back()-v[0]};
        }
        
    
};
