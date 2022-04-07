//Kth Smallest Element in a Sorted Matrix
https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;
        int n=matrix.size();
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
         v.push_back(matrix[i][j]);
         sort(v.begin(),v.end());
          return v[k-1];
    }
};


///////////////////uisng heap////////////////////////////////////

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> maxh;
        int n=matrix.size();
        
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
                maxh.push(matrix[i][j]);
                         
               if(maxh.size()>k)
                   maxh.pop();
            }            
            return maxh.top();    
    }
};
