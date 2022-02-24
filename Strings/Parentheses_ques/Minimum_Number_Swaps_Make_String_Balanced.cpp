// Minimum Number of Swaps to Make the String Balanced
https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/submissions/

class Solution {
public:
    int minSwaps(string s) {
       stack<char> st;
        int cnt=0;//no of wrong bracket prdesent in string
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='['){//opening bracket push into stack 
                st.push(s[i]);
            }
            else
            {
                if(!st.empty() and s[i]==']')
                {
                    st.pop();//close bracket h string m to open bracket pop krdo stack say
                }
                else
                {
                    cnt++;//else wrong bracket m cnt update krdo
                }
            
            }
            
        }
            return (cnt+1)/2;//this will give no of swaps needed to make string valid
        
    }
};


