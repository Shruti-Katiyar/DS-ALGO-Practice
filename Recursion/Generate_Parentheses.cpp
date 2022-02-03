//Generate Parentheses
https://leetcode.com/problems/generate-parentheses/submissions/

class Solution {
public:
    vector<string> ans;
    void solve(char *a,int n,int i,int open,int close){
        //base
        if(i==2*n){
            a[i]='\0';
            string x(a);
            ans.push_back(x);
            return ;
        }
        
        //rec
        if(open<n){
            a[i]='(';
            solve(a,n,i+1,open+1,close);
        }
        if(close<open){
            a[i]=')';
            solve(a,n,i+1,open,close+1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        char a[1000];
        
        solve(a,n,0,0,0);
        return ans;
    }
};
