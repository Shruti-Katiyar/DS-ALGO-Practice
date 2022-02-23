//Valid Substring  or Longest Valid Parentheses
https://practice.geeksforgeeks.org/problems/valid-substring0624/1#


//using 2 stack

class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<char>ch;
        stack<int> idx;
        idx.push(-1);//push -1 to index stack
        int len=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')//if ( then push it into charstack and push its idx into idxstack
            {
                ch.push(s[i]);
                idx.push(i);
            } 
            else //when ) bracket 
            {
                if(ch.size()!=0 and ch.top()=='(')
                {
                    ch.pop(); //pop ( from charstack and pop its idx also
                    idx.pop();
                    len=max(len,i-idx.top());//calculate length
                }
                else //if ch.size()==0 that means no element in stack then push ( idx into idxstack
                idx.push(i); //bw it can cause the prob for future valid string
            }
        }
        return len;
    }
};


//using one stack
//TC:O(N)  SC:(N)

class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        int len=0;
        
        stack<int>st;// this conatin idx of opening brackets
        st.push(-1);//push -1 to idx stack
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);//push idx of opening brackets
            }
            else
            {//it is closing brackets
               st.pop(); //pop out top idx
                if(st.size()==0)//empty h stack so push the cur idx
                    st.push(i);
                else
                    len=max(len,i-st.top());
                
            }
        }
        return len;
        
    }
};


//without using stack 
//TC:0(N)  SC:O(1)

class Solution {
public:
    int longestValidParentheses(string s) {
        int left=0;//opening bracket
        int right=0;//closing bracket
        int len=0;
 //start traversing the string from the left towards the right        
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                left++;
            else
                right++;
            if(left==right)
            
               // Whenever left is equal to right, it signifies that the subsequence is valid 
                len=max(len, left+right);
            else if(right>left) //Reseting the counters when the subsequence become invalid
     
                // ()) right=2 left =1 
                //it will never git valid string isly dono 0 krdo
                left=right=0;
        }
        //do this same from the reverse order bw all the time  we are considering prefix is having longest valid substring if sufix has to upper walla code op nh degha
        
// start traversing the string from the right towards the left    
        left=right=0;
        
        for(int i=s.size()-1 ;i>=0;i--){
            if(s[i]=='(')
                left++;
            else
                right++;
            if(left==right)
                len=max(len,left+right);
            
            else if (left>right)//check left>right
                left=right=0;
        }
        return len;
        
    }
};



