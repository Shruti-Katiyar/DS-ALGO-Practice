//First Unique Character in a String
//https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    //traverse through the string and push all the char in map and their cnt
    //again traverse in string 
    int firstUniqChar(string s) {
        
        unordered_map<char,int>m;
             // storing the number of times the character occured in the string
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        
           // output the first character which the occurance of one time
        for(int i=0;i<s.length();i++){
            if(m[s[i]]==1)
                return i;
        }
      
            return -1;
       
        
        
    }
};
