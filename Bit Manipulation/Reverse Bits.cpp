// 190. Reverse Bits
https://leetcode.com/problems/reverse-bits/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev=0;
        for(int i=0;i<32;i++){
            rev <<=1;//leftshift by 1
            //last bit we can get by doing and with 1
//rev!=(n & 1);//append the last bit
            rev += n % 2;
            //remove the last bit using right shift with 1 bit
            n >>=1;//this will remove last bit
          
          
                  
        }
        return rev;
        
    }
};
