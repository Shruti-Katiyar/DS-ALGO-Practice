//Binary Search Tree Iterator

class BSTIterator {
    private: 
        stack<TreeNode*> s;
public:
    BSTIterator(TreeNode* root) {
        push_all(root);
    }
    
    int next() {
        TreeNode*temp=s.top();
        s.pop();
        push_all(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }
   private:
    void push_all(TreeNode* node){
        for(; node!=NULL;s.push(node),node=node->left);
        
    }
};

