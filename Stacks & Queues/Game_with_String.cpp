//Game with String 
https://practice.geeksforgeeks.org/problems/game-with-string4100/1

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
          m[s[i]]++;        
        }
        
        priority_queue<int> pq;
        for(auto x:m){
            pq.push(x.second);
        }
        while(k!=0){
            int x = pq.top();
            pq.pop();
            x--;
            pq.push(x);
            k--;
        }
        int sum=0;
        while(!pq.empty()){
            int d=pq.top();
          
            sum=sum+(d*d);
            pq.pop();
        }
        return sum;
    }
};
