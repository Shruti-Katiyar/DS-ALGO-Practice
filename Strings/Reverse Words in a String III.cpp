//Reverse Words in a String III
https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/

class Solution {
public:
    
//here we are reversing words of string
//take 2 pointers l or r then jab r walla space (end of word)per pahuch jayai then reverse krna start kro
//after reversing l will move to next word  l=r+1 and r=l r and l should point to same letter
      
 string reverseWords(string s) {
        int l = 0, r = 0;
        while(l < s.size()){
            while(r < s.size() && s[r] != ' '){
                r++;
            }
            reverse(s.begin() + l, s.begin() + r);
            l = r+1;
            r = l;
        }
        return s;
 }
    };
//tc: o(n)
