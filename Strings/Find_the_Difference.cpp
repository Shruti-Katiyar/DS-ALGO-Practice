//Find the Difference
https://leetcode.com/problems/find-the-difference/submissions/

class Solution {
public:
    char findTheDifference(string s, string t) {
        //sort both string then compare  and return 
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i])
                return t[i];
        }
        return t[t.length()-1];//length of t is 1 unit more than s, so last element can be the last char of t
    } 
    
};
//TC: O(NlogN)

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    char findTheDifference(string s, string t) {
        int a=0;//it store sum of s string(ascii calue store kregha)
        int b=0;//store sum of t 
        for(char c:s)//going to each letter of string
            a+=c;//then adding the sum
        
        for(char c:t)
            b+=c;
        
        return b-a;//that will give extra char
    }
};
//TC: O(N1+N2)




