//Sum Tree (gfg)
class Solution
{
    public:
    int f=1;//global variable assuming ans is true
    //if f=0 false 
    //if f=1 true
    int solve(Node* root){
        if(!root)return 0;
        if(!root->left and !root->right)//it means leaf node 
        return root->data;//us node ko hi return kardo
        
        if(f==0)return 0;//agar khi bhi false mil gya to directly return 0 further move nh krna rec ko
        
        int a=solve(root->left);
        int b=solve(root->right);
        if(a+b!=root->data){
            f=0;//not sum tree
        }
        else 
        return a+b+root->data;
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         f=1;
         solve(root);
         return f;
    }
};
