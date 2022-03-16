//Merge Strings Alternately
https://leetcode.com/problems/merge-strings-alternately/submissions/

class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int i=0;
        int j=0;
        string ans="";
        
        while(i<s1.size() and j<s2.size())
        {
            ans+=s1[i++];
            ans+=s2[j++];
        }
        //agar s2 string finish hoghi to s1 k char last m add krdo
         while(i<s1.size())
        {
            ans+=s1[i++];
            
        }
         //agar s1 string finish hoghi to s1 k char last m add krdo
         while(j<s2.size())
        {
            ans+=s2[j++];
        }
        return ans;
        
    }
};
