//https://leetcode.com/problems/longest-substring-without-repeating-characters/
//Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int> m;
        
        int i=0;
        int j=0;
        int cnt=0;
        
        while(j<n){ //iterate over the given string
            //store char in map
            m[s[j]]++;
             
            //agar freq 1 say jayada h to i th walla char niklna hogha
            while(m[s[j]]>1){
                m[s[i]]--; //pichay say char remove hogha or i update hogha
                i++;
            }
            cnt =max(cnt,j-i+1);
            j++; //j bhi update hogha
        }
       return cnt; 
        
    }
};
