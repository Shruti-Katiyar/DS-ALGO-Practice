//Matrix Diagonal Sum
https://leetcode.com/problems/matrix-diagonal-sum/submissions/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        //when n is odd then take sum of both diagonal & subtract mid value from it.
        //when n=even sum of both diagonal
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum= sum+ mat[i][i] + mat[i][n-1-i];
            
        }
        if(n%2==0){ //if n is evn return sum 
            return sum ;
        }
        else{
            //subtract mid no form sum then return 
            return sum-mat[n/2][n/2];
        }
    }
};
//n/2 = 3/2=1; middle element hogha n/2

//TC:o(n)
