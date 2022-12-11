/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head){
    int arrSize = 0;
    struct ListNode* curr = head;
    
    while(curr != NULL){
        arrSize++;
        curr = curr->next;
    }

    int* arr = (int*)malloc(arrSize * sizeof(int));
    curr = head;
    int index;

    for(index = 0; index < arrSize; index++){
        arr[index] = curr->val;
        curr = curr->next;
    }

    for(index = 0; index < arrSize; index++){
        if(arr[index] != arr[arrSize - index - 1]){
            return false;
        }
    }

    free(arr);

    return true;
}