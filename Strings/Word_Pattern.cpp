//Word Pattern
https://leetcode.com/problems/word-pattern/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;//push all the words in vector
        int i=0;
        string temp="";
        while(i<s.size()){
            if(s[i]==' '){
                v.push_back(temp);
                temp="";
            }
            else{
                temp +=s[i];
            }
            i++;
        }
        v.push_back(temp);
        //checking for the size
        if(v.size()!=pattern.size()){//agar dono ka size equal nh h to return false
            return false;
        }
        
        unordered_map<char,string> m;//key is char and value is string
        set<string>st;//to check same value map only one times
        
        for(int i=0;i<pattern.size();i++){
            if(m.find(pattern[i])!=m.end()){//pattern or value is in hashmap
                if(m[pattern[i]]!=v[i]){//is they are not equal
                    return false;
                }
            }
            else{//agar value nh hashmap m then add kro
                //first check it is  already in the set or not
                if(st.count(v[i])>0){//means wo already h set per
                    return false;
                }
                m[pattern[i]]=v[i];
                st.insert(v[i]);
            }
        }
        return true;
        
        
        
        
    }
};
