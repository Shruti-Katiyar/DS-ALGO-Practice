//Check if One String Swap Can Make Strings Equal
https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/


class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
    int c=0;
    unordered_map<int , int>m;
    for(int i=0 ; i<s1.length() ; i++)
   {
      m[s1[i]]++;
   }
   for(int i=0 ; i<s2.length() ; i++)
  {
    if(m[s2[i]]==0) return 0;
  }
  for(int i=0 ; i<s1.length() ; i++)
 {
    if(s1[i]!=s2[i])
     {
        c++;
     }
 }
  if(c==0||c==2) return true;
  return false;
    }
};
