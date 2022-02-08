//Isomorphic Strings
https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2)return false;
        
        int m1[256]={0};
        int m2[256]={0};
        
        for(int i=0;i<n1;i++){
        if(!m1[s[i]] and !m2[t[i]]){
            m1[s[i]]=t[i];
            m2[t[i]]=s[i];
        }
        else if(m1[s[i]]!=t[i])
        return false;
        
        }  
    
      return true;
    }
    
};

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m;
        set<char>x;
        for(int i=0;i<s.size();i++){
            if(m.count(s[i])==0 and x.count(t[i])==0){// means they are first time occur in map and set
                m[s[i]]=t[i];//map m insert kiya 
                x.insert(t[i]);//set per kiya
               
                
            }
            else if(m.count(s[i])==0 and x.count(t[i]))//if mapping nh h but set per prsent h then return false
                return false;
            else if(m[s[i]]!=t[i])//jo map hua h wo t stirng k equal nh then false
                return false;
        }
        return true;
    }
};

