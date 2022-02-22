//Min Number of Flips
https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1#

//case 1: agar  0101 condition m convert hoagh 
//agar even pos per 1 h to c1++ kro kuki usko 0 krna hogha
//agr odd pos per 0 h to c1++ hogha kuki odd pos per 1 rakhna h

//case 2:  agr 10101 walii m convert hogha
//even pos per 1 rakhna h 
//odd per 0 rakhna h
//agra inka opposite hua c2++ hogha

//final ans will be minimum of c1 or c2
int minFlips (string s)
{
    int c1=0;
    int c2=0;
    int ans;
    for(int i=0;i<s.length();i++){
        if(i&1 and s[i]=='0')//i odd h or us pos pe 0 h to c1++
        c1++;
        if(i%2==0 and s[i]=='1')//i even h or uspos per 1 h to c1++
        c1++;
        
        if(i&1 and s[i]=='1')//i odd h to  wha 0 rakhna h agr us pos per 1 h c2++ 
        c2++;
        if(i%2==0 and s[i]=='0')//i even h to uspos per 1 honachaiye but wha agar 0 h to flip hogha
        c2++;
     
       ans=min(c1,c2);
    }
      return ans;
  
 
  }
 
 
    

