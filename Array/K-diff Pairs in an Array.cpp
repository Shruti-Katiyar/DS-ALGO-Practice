//K-diff Pairs in an Array
https://leetcode.com/problems/k-diff-pairs-in-an-array/

class Solution {
public:
    
 //  arr[i]-arr[j]=k
// or arr[i]-k=arr[j]
 /*make hashmap & store all the values of arr with their freq & then traverse through the hashmap and chekc the cond arr[i] is the key in hashmap 
           key      value
           3         1
           1         2
           4         1
           5         1
   edge case when k==0  
   */
    
    int findPairs(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        int cnt=0;//store  no of unique pair
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;//put the value of arr in  hashmap
        }
        
        
    // case :k==0 means they have same value present in diff idx
        if(k==0){
            for(auto x:m)//iterate over hashmap
            {
                if(x.second>1){//if freq of elemnt >1
                    cnt++;
                    
                }
            }
            return cnt;
        }
    //case : k > 0
        for(auto x:m){
            if(m.count(x.first-k)){//arr[i]-k present in map
               cnt++;
            }
        }
        return cnt;
        
        
    }
};
