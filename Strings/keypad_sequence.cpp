//Convert a sentence into its equivalent mobile numeric keypad sequence
https://practice.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1#

string printSequence(string s)
{
    //code here.
    string str[26]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999",
   "9999"};


   string ans;
   for(int i=0;i<s.size();i++){
       if(s[i]==' ')//if current element is space then add 0 in the string
       ans+='0';//bw in numeric keypad space is enter by a 0
       else
       {
          ans+=str[s[i]-'A'];
       }
   }
   return ans;
}
