//Reshape the Matrix
https://leetcode.com/problems/reshape-the-matrix/submissions/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        //check if total elements in both matrices will be same and then transform
        vector<vector<int>>ans(r,vector<int>(c));
                 
        if(mat.size()*mat[0].size()!=r*c)return mat;
        
        int row=0;
        int col=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                ans[row][col]=mat[i][j];
                col++;
                if(col==c){
                    row++;
                    col=0;
                }
            }
            
        }
        return ans;
            
    }
};
