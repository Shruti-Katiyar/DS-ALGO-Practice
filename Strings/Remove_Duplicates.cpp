//Remove Duplicates
https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1#

class Solution{
public:	
		
	string removeDups(string s) 
	{
	    // Your code goes here
	    unordered_set<char> st;
	    string ans;
	    for(int i=0;i<s.size();i++){
	        if(st.find(s[i])==st.end()){
	            ans+=s[i];
	            st.insert(s[i]);
	        }
	    }
	    return ans;
	}
};
