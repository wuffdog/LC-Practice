/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val){
    if(root == NULL){
        return NULL;
    }

    if(root->val == val){
        return root;
    }

    struct TreeNode* a = searchBST(root->left, val);
    struct TreeNode* b = searchBST(root->right, val);

    if(a != NULL){
        return a;
    }

    return b;
}