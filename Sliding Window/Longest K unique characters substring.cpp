//https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
//Longest K unique characters substring

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int n=s.size();
    int i=0;
    int j=0;
    int len=INT_MIN;
    unordered_map<char,int>mp;
    
    while(j<n){
        mp[s[j]]++; //push char in map
        
        // 1. when less then k
        if(mp.size()<k){
            j++;
            
        }
        else if(mp.size()==k){// when map size is  equal to k
            len=max(len,j-i+1);
            j++;
        }
        else if(mp.size()>k){ //map size zayda ho then erase 
            //pichay say remove kreghy and i update kreghy
            while(mp.size()>k){ //jabtak map ka size k k equal nh hojat remove char
                mp[s[i]]--;
                
                if(mp[s[i]]==0){//agar char ki freq 0 hogyi h to usko remove krdo agar remove nh krghy to map ka size wrong ayegha
                    mp.erase(s[i]);
                }
               i++;
            }
           j++; 
           }
    
     
        
      }
    
    if(len>0)
       return len;
    else 
     return -1;
    }
};
