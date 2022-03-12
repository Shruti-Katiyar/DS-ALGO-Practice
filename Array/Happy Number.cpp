//Happy Number
https://leetcode.com/problems/happy-number/submissions/

class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        int sum;
        int index;
        while(1){
            sum=0;
            while(n){
                index=n%10;
                sum += index*index;
                n/=10;
            }
            if(sum==1)return true;
            else if(s.find(sum)!=s.end())
                return false;
            s.insert(sum);
            n=sum;
        }
        return true;
        
    }
};
