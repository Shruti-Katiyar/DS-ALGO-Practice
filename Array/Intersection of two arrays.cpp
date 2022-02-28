//Intersection of two arrays 
https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        int cnt=0;
        set<int> s1;
        set<int> s2;
        
        for(int i=0;i<n;i++)
        s1.insert(a[i]);
        
        for(int i=0;i<m;i++ )
        s2.insert(b[i]);
        
        for(auto x:s1){
            if(s2.find(x)!=s2.end()){
                cnt++;
            }
        }
        return cnt;
    }
};


 //Intersection of Two Arrays (leetcode)
 https://leetcode.com/problems/intersection-of-two-arrays/
 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int> ans;
        set<int> s1;
        set<int> s2;
        
        for(int i=0;i<nums1.size();i++)
        s1.insert(nums1[i]);
        
        for(int i=0;i<nums2.size();i++ )
        s2.insert(nums2[i]);
        
        for(auto x:s1){//agar set1 ka no set2 m present h then wo ans ka part hogha
            if(s2.find(x)!=s2.end()){//find no in set2
                ans.push_back(x);//push that no in ans vector
            }
        }
        return ans;
    }
};

