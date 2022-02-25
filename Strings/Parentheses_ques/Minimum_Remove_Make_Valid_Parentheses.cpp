//Minimum Remove to Make Valid Parentheses
https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/submissions/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
       //store the idx of brackets in stack 
        
        stack<int>st;//idx store kr rhai h tabhi int liya h
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);//push the idx of opening bracket
            }
            else if(s[i]==')')
            { //have to delete the bracket 
                if(!st.empty() and s[st.top()]=='(')
                    st.pop();
                else st.push(i);//push the opening bracket if it is not closing 
            }
            
        }
        while(!st.empty()){//delete the brackets from string and these brackets we get from stack top bw in satck we have store idx of  invalid brackets
            s.erase(st.top(),1);//1 char at a time erase krna h
            st.pop();
        }
        return s;
    }
};
//TC:O(N)  SC:O(N)

//WITHOUT STACK

//if whenever the string is not valid we replace it with (*) so that we do not add that character to out result.
// we do the above operation from left side and than right side and finally return the string.

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int cnt = 0;
        // starting from left to right 
        // check if string is valid or not
        // if not valid replace * with string
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(') cnt++;
            else if(s[i] == ')') {
                cnt--;
                if(cnt < 0) {
                    s[i] = '*';
                    cnt = 0;
                }
            }
        }
        
        cnt =  0;
        // starting from right to left
        for(int i=s.size()-1; i>=0; i--) {
            if(s[i] == ')') cnt++;
            else if(s[i] == '(') {
                cnt--;
                if(cnt < 0) {
                    s[i] = '*';
                    cnt = 0;
                }
            }
        }
        string ans = "";
        for(int i=0; i<s.size(); i++) {
            if(s[i] != '*') ans += s[i];
        }
        return ans;
    }
};
//TC:O(N) SC:O(1)
