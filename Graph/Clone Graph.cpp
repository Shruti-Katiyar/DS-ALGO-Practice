//Clone Graph
https://leetcode.com/problems/clone-graph/

class Solution {
public:
    Node* dfs(Node*cur, unordered_map<Node*,Node*>& m){
        vector<Node*>v;
        Node*clone=new Node(cur->val);
        m[cur]=clone;
        for(auto it:cur->neighbors)
        {
            if(m.find(it)!=m.end())
                v.push_back(m[it]);
            else
                v.push_back(dfs(it,m));
        }
        clone->neighbors=v;
        return clone;
    }
    
    
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*> m;
        
        if(node==NULL)
            return NULL;
        if(node->neighbors.size()==0){
            Node* clone=new Node(node->val);
            return clone;
                
        }
        return dfs(node,m);
    }
};




