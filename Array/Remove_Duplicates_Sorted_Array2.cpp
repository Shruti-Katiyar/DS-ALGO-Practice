//Remove Duplicates from Sorted Array II
https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(auto e:nums){//going to each element 
            if(i==0 or i==1 or e!=nums[i-2]){//if they are not equal
                nums[i]=e;//move the e to ith idx
                  i+=1;//i will incrememt 
                //jab equal hogha tab i increment nh hogha
           }
        }
        return i;
    }
};

//TC:O(N)  going to each element    
//SC: O(1)
