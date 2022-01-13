
class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        //code here
        if(st.size()==0)
        return ;
        
        int element=st.top();
        st.pop();
        clonestack(st,cloned);
        cloned.push(element);
    }
};

