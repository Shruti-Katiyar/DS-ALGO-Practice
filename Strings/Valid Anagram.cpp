//Valid Anagram
https://leetcode.com/problems/valid-anagram/submissions/

  class Solution {
public:
 //cnt of char must be same   
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false; //is size are not equal
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return  s==t;
        
              
    }
}; 

//TC: O(NlogN)


class Solution {
public:
    bool isAnagram(string s, string t) {
        //We can store count of letters in the given two strings and then compare that count of every character should be same.
        if (s.size()!=t.size())
            return false;
        
        unordered_map <char, int> m;
        for (int i=0; i<s.size(); i++) {
            m[s[i]]++;
            m[t[i]]--;
        }
        for (auto it: m) {
            if (it.second) return false;
        }
        return true;
    }
    
};     
      
        
  










