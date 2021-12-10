//Kth largest element in BST  (GFG)
class Solution
{
    public:
    int kthLargest(Node *root, int K)
    {
        //Your code here
        stack<Node*>s;
        Node* node=root;
        int cnt=0;
        while(true){
            if(node!=NULL){
                s.push(node);
                node=node->right;
            }
            else{
                if(s.empty()){
                break;
              }
              node=s.top();
              s.pop();
              cnt++;
              if(cnt==K)return node->data;
              node=node->left;
            }
            
        }
        return -1;
    }
};
