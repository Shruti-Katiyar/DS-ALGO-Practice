//Check Mirror in N-ary tree 
https://practice.geeksforgeeks.org/problems/check-mirror-in-n-ary-tree1528/1#


class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
//if they are mirror then they will be reverse order
// first arr m 1-k corresponding values stack m push krdo  then 2nd arr traverse kro
//3 aya check if is at the top of stack is yes then pop it this means 
        
        unordered_map<int,stack<int>> m;
        for(int i=0;i<2*e;i+=2){//no of elements in frist arr is 2*edges
        //12 13 
        //    1                                          
         // 2    3                                        [3]
            m[A[i]].push(A[i+1]);//stack of 1->2 push 2    [2]
        }
        
        for(int i=0;i<2*e;i+=2){//traverse in 2nd arr
//going to map corresponding to 1st node
//check top of stack is equal to 3 or not 
//if it is not return 0 othewise pop it        
            if(m[B[i]].top()!=B[i+1])return 0;
            m[B[i]].pop();
        }
        return 1;
    }
};
