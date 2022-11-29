/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* search(struct TreeNode* current, int key, struct TreeNode* target_prev, int* next_dir);

struct TreeNode* deleteNode(struct TreeNode* root, int key){
    int* next_dir = (int*)malloc(sizeof(int));
    *next_dir = 0;
    struct TreeNode* target_prev = root;
    struct TreeNode* current = root;
    struct TreeNode* target = NULL;
    struct TreeNode* target_next = NULL;
    target = search(current, key, target_prev, next_dir);
    
    printf("%d\n", target_prev->val);
    printf("%d\n", *next_dir);
    printf("%d", target->val);
    
    if(target->left != NULL){
        if(*next_dir == 1){
            target_prev->left = target->left;
            target->left->right = target->right;
        }else if(*next_dir == 2){
            target_prev->right = target->left;
            target->left->right = target->right;
        }
        free(target);
    }else if(target->right != NULL){
        if(*next_dir == 1){
            target_prev->left = target->right;
            target->right->left = target->left;
        }else if(*next_dir == 2){
            target_prev->right = target->right;
            target->right->left = target->left;
        }
        free(target);
    }else{
        target = NULL;
    }
    return root;
}

struct TreeNode* search(struct TreeNode* current, int key, struct TreeNode* target_prev, int* next_dir){
    if(current->val == key){
        return current;
    }else if(current->val > key){
        *target_prev = *current;
        *next_dir = 1;
        return search(current->left, key, target_prev, next_dir);
    }else if(current->val < key){
        *target_prev = *current;
        *next_dir = 2;
        return search(current->right, key, target_prev, next_dir);
    }else{
        return NULL;   
    }
}
