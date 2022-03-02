//Union of Two Sorted Arrays 
https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays/1#

class Solution{
    public:
   
    vector<int> findUnion(int a[], int b[], int n, int m)
    {
        //Your code here
      
        set<int>s;
        vector<int> ans;
        
        for(int i=0;i<n;i++){//store all the char of arr1
            s.insert(a[i]);
        }
            
            for(int i=0;i<m;i++){//store all char of arr2
                s.insert(b[i]);
                
            }
            for(auto x:s)
            ans.push_back(x);
            
        return ans;
    }
};
