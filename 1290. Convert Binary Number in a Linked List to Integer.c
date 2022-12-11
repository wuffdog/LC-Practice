/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head){
    int arrSize = 0;
    struct ListNode* curr = head;

    while(curr != NULL){
        arrSize++;
        curr = curr->next;
    }

    int* arr = (int*)malloc(arrSize * sizeof(int));
    int arrIndex;
    curr = head;

    for(arrIndex = 0; arrIndex < arrSize; arrIndex++){
        arr[arrIndex] = curr->val;
        curr = curr->next;
    }

    int dec = 0;
    for(arrIndex = 0; arrIndex < arrSize; arrIndex++){
        dec += arr[arrSize - arrIndex - 1] * pow(2, arrIndex);
    }

    return dec;
}