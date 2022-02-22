//Palindrome String
https://practice.geeksforgeeks.org/problems/palindrome-string0817/1

class Solution{
public:	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    string a=S;
	    reverse(a.begin(),a.end());
	    if(a==S){
	    return 1;
	    }
	    
	    return 0;
	}

};

//TC:O(N)  SC:O(N)

//Optimised 
//TC: O(N)  SC:O(1)

class Solution{
public:	


int isPalindrome(string S)
{
    int high=S.size()-1,low=0;
    while(high>=low){
        if(S[high]==S[low]){
            high--;
            low++;
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
  }
};

