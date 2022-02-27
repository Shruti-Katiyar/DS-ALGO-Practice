//Remove Invalid Parentheses
https://leetcode.com/problems/remove-invalid-parentheses/

class Solution {
public:
    vector<string>ans;
    unordered_map<string,int>m; //to avoid duplicate use set or map
    
    //calculating how many invalid parentheses are there using stack
    int no_ofinvalid(string s){
        stack<char> st;
        
        //iterating to the string 
        int i=0;
        while(i<s.size()){
            if(s[i]=='('){ //agra opening h  stack m push krdo
                st.push('(');
            }
            else if(s[i]==')'){ //agar closing h to 
                if(st.size()>0 and st.top()=='(')//agar stack k top per ( h to usko pop krdo
                    st.pop();
                else
                    st.push(')'); //warna closing walla push krdo stack per
                
            }
            i++;
        }
        return st.size();//size of stack = no of invalid parenthesis
    }
    
    void solve(string s,int cnt){
        
        if(m[s]!=0)//for checking that string is already exist in map or not
            return;//agar already ah chuki h string then return
        else
            m[s]++;//if string is coming first time add into the map and increase its cnt
        
        
        //base case
        if(cnt <0){ 
            return;
        }
        if(cnt==0){// invalid cnt is 0 check check string is valid or not 
            if(!no_ofinvalid(s))
                ans.push_back(s);
            return;
        }
        for(int i=0;i<s.size();i++){
            //go to every brackets 
          //  ()())() 
      //     0    i ->this is i 
                
            string left=s.substr(0,i);
            string right=s.substr(i+1);
            solve(left+right,cnt-1);//rec call 1 parentheses remove krdiya h to invalid-1 pass hogha
        }
        return;
    }
    vector<string> removeInvalidParentheses(string s) {
        solve(s,no_ofinvalid(s));
        return ans;
    }
};
