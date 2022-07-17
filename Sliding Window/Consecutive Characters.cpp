//https://leetcode.com/problems/consecutive-characters/submissions/
//Consecutive Characters

class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int ans=1;
        int cnt=1;
        
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){ //prev say match hota h ki nh
                cnt++; //agar hota h to cnt update kro
                ans=max(ans,cnt); //ans 
            }
            else{
                cnt=1; //cnt reset kreghy abbc
                ans=max(ans,cnt); 
            }
        }
        return ans;
    }
};
