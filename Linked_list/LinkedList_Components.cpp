//Linked List Components
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        set<int>s;
        for(auto val:nums)
        {
            s.insert(val);
        }

        int ans=0;
        while(head!=NULL)
        {  int flag=0;
            while(head!=NULL && s.find((head->val))!=s.end())
            {
                flag=1;
                head=head->next;
            }
            if(flag==0)
                head=head->next;
            ans+=flag;
        }
        return ans;
    }
};
