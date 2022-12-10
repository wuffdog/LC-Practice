/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool compare(struct TreeNode* root_left, struct TreeNode* root_right);

bool isSymmetric(struct TreeNode* root){
    return compare(root->left, root->right);
}

bool compare(struct TreeNode* root_left, struct TreeNode* root_right){
    if(root_left == NULL && root_right == NULL){
        return true;
    }
    if(root_left == NULL || root_right == NULL){
        return false;
    }
    if(root_left->val != root_right->val){
        return false;
    }
    return compare(root_left->left, root_right->right) && compare(root_left->right, root_right->left);
}