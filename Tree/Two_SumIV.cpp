//Two Sum IV - Input is a BST

class BSTiterator{
    stack<TreeNode*>s;
    bool reverse=true;
public:
    BSTiterator(TreeNode* root,bool isreverse){
        reverse=isreverse;
        pushall(root);
    }
   bool hashNext(){
      return !s.empty();
  } 
   int next(){
       TreeNode*temp=s.top();
       s.pop();
       if(!reverse)
           pushall(temp->right);
       else
           pushall(temp->left);
       return temp->val;
   } 
private:
    void pushall(TreeNode* node){
        for(;node!=NULL;){
            s.push(node);
                if(reverse==true){
                    node=node->right;
                }
            else{
                node=node->left;
            }
        }
    }
    
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root)return false;
        BSTiterator l(root,false);
        BSTiterator r(root,true);
        
        int i=l.next();
        int j=r.next();
        while(i<j){
            if(i+j==k)return true;
            else if(i+j<k)i=l.next();
            else j=r.next();
        }
        return false;
    }
};
