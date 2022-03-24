// Power of Two
https://leetcode.com/problems/power-of-two/submissions/

class Solution {
public:
    bool isPowerOfTwo(int n) {
      //if n =1 return true ,it can be created with 2^x 
        //if n ki vlaue -ve h then return false
        //n odd h tab 2^x false hi hogha
        //n is even then check divide kro 2 say divide kro jabtak 1 nh ahjata agr ahgya then we know 1 k saty ban skatai h to return true
        
        if(n<1)
            return false;
        if(n==1)
            return true;
        if(n%2==1) //n odd h 
            return false;
        return (isPowerOfTwo(n/2));
        
        
    }
};
