//Maximum Nesting Depth of the Parentheses
https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/


class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(s[i]==')'){
                int x=st.size();//stack size
            ans=max(ans,x);//update ans
                st.pop();
            }
           
        }
        return ans;
    }
    
};       

//without stack
class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;//no of brackets
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            {
                cnt++;
                ans=max(ans,cnt);//update ans
            }
            else if(s[i]==')')//decrease the value of cnt
            cnt--;
        }
        return ans;
    }
};
//TC:O(N)  SC:O(1)
