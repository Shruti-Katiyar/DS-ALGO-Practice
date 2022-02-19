// Binary Tree Cameras
https://leetcode.com/problems/binary-tree-cameras/

class Solution {
public:
    int camera;
    int solve(TreeNode* root){
        //this function return the states of the root node
        //root node per camera laga h:1
        //root node per monitor ho rhi h:0
        //root node per monitor nh ho rhi h:1
     
        
        if(!root)return 0;//empty tree is monitored
        
        int left=solve(root->left);
        int right=solve(root->right);
        
        if(left==-1 or right==-1){//-1 means nodes are not getting mointored
            camera++;
           return 1;//1 means root node per camera laga h
    }
    else if(left==1 or right==1){//child per camera h
        //toh root per camera is not needed , it is being monitored
        return 0;
    }
    return -1;//root node is not monitored
}
    int minCameraCover(TreeNode* root) {
        camera=0;
        if(solve(root)==-1)
            camera++;
        return camera;
    }
};
