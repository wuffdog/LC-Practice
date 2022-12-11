/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root){
    if(root == NULL){
        return 0;
    }
    
    int a = 1 + maxDepth(root->left);
    int b = 1 + maxDepth(root->right);

    if(a > b){
        return a;
    }else{
        return b;
    }

    return -1;
}