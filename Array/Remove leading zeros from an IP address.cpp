//Remove leading zeros from an IP address 
https://practice.geeksforgeeks.org/problems/remove-leading-zeros-from-an-ip-address3530/1

class Solution
{
  public:
  //leading zero means jo phalay ata h no say eg:: 020 =20
  //agr 000 h to  1 zero return krna hogha
    string newIPAdd (string s)
    {
        //code here.
        string ans="";
        for(int i=0;i<s.size();i++){
            string temp=""; //isko harbar dot k bad empty krdeghy
            while(i<s.size() and s[i]=='0')//jabtak leading zero mill rha i++ kro
                i++;
            while(i<s.size() and s[i]!='.'){//agr dot nh h or leading 0 bhi nh h eg :200 to ye temp m store hogha
                temp+=s[i];
                i++;
            }
            if(temp.size()==0)
            temp='0';
            ans+=i<s.size() ? temp+'.': temp;
            
        }
        return ans;
    }
};
