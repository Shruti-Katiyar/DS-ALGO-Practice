//https://leetcode.com/problems/substrings-of-size-three-with-distinct-characte
// Substrings of Size Three with Distinct Characters

class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int i=0;
        int j=0;
        int k=3;
        int cnt=0;
        unordered_map<char,int> m;
        
        while(j<n){
            m[s[j]]++;//store char in map
            
            //1. string ka size small ho k say
            if(j-i+1<k){
                j++; //ahghy move kro
            }
            else{
                //map ka size k==3 ho 
                if(m.size()==k)
                    cnt++;
                
                
                //yha k say bigger ho
                m[s[i]]--; //window move kro
                
                if(m[s[i]]==0) //jo ith char remove kiya h uska cnt o hojat h map to usko map say erase krdo .
//agar map say erase nh kiya to map ka size wrong ayegha                    
                    m.erase(s[i]); //
                    i++;
                    j++;
            }
        }
        return cnt;
        
    }
};

