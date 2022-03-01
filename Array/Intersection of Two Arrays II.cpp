//Intersection of Two Arrays II
https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         //set use nh kreghy bw wo unique value dayta h 
        //use map with its freq/cnt
        //ek no kitni bar ah rha h wo map store kregha
        
//when we are iterating arr1 we increase the cnt 
//but  on traversing arr2 decrease the cnt of same no occur in arr2 also and add that ni in ans
        
       map<int,int> m;//first part store element 2nd part stores cnt
       vector<int> ans;
        
          for(int i=0;i<nums1.size();i++){
	       m[nums1[i]]++;//store the elements and increment the cnt 1:1 2:2
          }
        
         for(int i=0;i<nums2.size();i++){
	           auto it=m.find(nums2[i]);//if element is present in arr2 
	            if(it!=m.end() and it->second>0){//if it is present (common no) and its cnt >0
		        ans.push_back(nums2[i]);
		        it->second--;//decrease its cnt
 	          }
         }
        
        return ans;
    }
};
