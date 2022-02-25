//Valid Parenthesis String
https://leetcode.com/problems/valid-parenthesis-string/submissions/

class Solution {
public:
    bool checkValidString(string s) {
        stack<char>open;//opening idx
        stack<char>star;//it will contain * idx
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')//push ( idx into stack
                open.push(i);
            else if(s[i]=='*')//push * idx 
                star.push(i);
            else
                //closing brackets are balanced by poping opening brackets
                //if ( are finished then pop the stars
            {
                if(!open.empty())
                    open.pop();
                else if (!star.empty())
                    star.pop();
                else //if open and star both stacks are empty and u encounter closing bracket then return false
                    return false;
            }
        }
        //now balance open brackets by converting stars into ) 
        while(!open.empty())//jabtak open empty nh hojata
        {
          if(star.empty())//star stack empty h then ( balanced nh hopayeghy return fale
          return false;
//agr star stack empty nh h then compare kro idx 
//star stack  k idx > open .top then only we can balanced ( by making start )
            else if (open.top() <star.top())//it means star is right side of ( bracket
            {
                open.pop();
                star.pop();
                
            }
            else //agr right side nh h then return false this cnt be balanced
                return false;
        }
        return true;
    }
        
};
