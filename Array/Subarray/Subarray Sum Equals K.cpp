//Subarray Sum Equals K
https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
//consider every possible subarray of the given numsnums array, find the sum of the elements of each of those subarrays and check for the equality of the sum obtained with the given kk. Whenever the sum equals kk, we can increment the countcount used to store the required result.    
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
      
        
        for(int start=0; start<nums.size(); start++){
            for(int end=start+1; end<=nums.size(); end++){
                int sum=0;
                for(int i=start; i<end; i++)
                sum+=nums[i];
                 
                if(sum==k)
                    cnt++;
            }
        }
        return cnt;
    }
};
//THIS WILL GIVE TLE
//TC: O(N3)  SC:O(1)

////////////////////////////////////optimised///////////////////////////////////////

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int cnt=0;
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];//storing sum
            if(sum==k)cnt++; 
            
            //finding sum in hashmap
            if(m.find(sum-k)!=m.end()){//if sum is present
                cnt=m[sum-k]+cnt;//get its cnt
            }
            //if we found sum already present in map 
            if(m.find(sum)!=m.end()){
                m[sum]++;//increment the cnt else usko map m dal do
            }
            else{
                m[sum]=1;//map m dal do with value 1
            }
              
        }
        
        return cnt;
    }
};
//TC:O(N) sc:o(n)
