 //_Minimum Add to Make Parentheses Valid
https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/submissions/

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
  //agar stack empty nh h or current bracket closing h or stack k top per opening bracket h to usko pop krdo else push kro          
        if(!st.empty() and (s[i]==')'&& st.top()=='(')){
            st.pop();
          }
            else{
                st.push(s[i]);
            }
        }
    
        return st.size();
    }
    
}; 
//TC:O(N)  SC:O(N)

//Optimised 

class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0;
        int close=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
         	else{
		        if(open==0) close++; //jab open 0 h i.e koi bracket open nh h to pair form nh hogha  close++ krdo
	         	else
		        open--;//closing earlier open bracket 
		
   	       }
       }
       
     return (open+close);
   }
};

//TC:O(N) SC:O(1)
 
