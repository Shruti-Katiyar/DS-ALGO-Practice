//Delete middle element of a stack 
https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1/#

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int n,int cur=0)
    {
        //for  both odd & even
       // mid:n/2+1
       int mid=n/2;
       if(s.empty() or cur==n){
           return ;
       }
       int x=s.top();
       s.pop();
       deleteMid(s,n,cur+1);//rec call
       
       if(cur!=mid){
           s.push(x);
       }
       
       

        
    }
};

