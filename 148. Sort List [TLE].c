// Time Limit Exceeded

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* sortList(struct ListNode* head){
    struct ListNode* curr = head;
    int arrSize = 0;

    while(curr != NULL){
        arrSize++;
        curr = curr->next;
    }

    int* arr = (int*)malloc(arrSize * sizeof(int));
    int arrIndex = 0;
    curr = head;

    while(curr != NULL){
        arr[arrIndex] = curr->val;
        arrIndex++;
        curr = curr->next;
    }


    for(arrIndex = 0; arrIndex < arrSize; arrIndex++){
        for(int i = arrIndex + 1; i < arrSize; i++){
            if(arr[arrIndex] > arr[i]){
                int temp = arr[i];
                arr[i] = arr[arrIndex];
                arr[arrIndex] = temp;
            }
        }
    }

    curr = head;
    arrIndex = 0;

    while(curr != NULL){
        curr->val = arr[arrIndex];
        arrIndex++;
        curr = curr->next;
    }

    return head;
}