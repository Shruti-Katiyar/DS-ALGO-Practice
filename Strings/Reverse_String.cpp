//Reverse a String
https://practice.geeksforgeeks.org/problems/reverse-a-string/1#

string reverseWord(string str){
    
  //Your code here
  int n=str.length();
  for(int i=0;i<n/2;i++)
  swap(str[i],str[n-i-1]);

return str;
}

for (int i=str.length()-1; i>=0; i--)
      cout << str[i];
