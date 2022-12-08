/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* ini = (struct ListNode*)malloc(sizeof(struct ListNode));
    ini->val = -101;
    ini->next = head;
    struct ListNode* curr = ini;

    while(curr->next != NULL){
        if(curr->val == curr->next->val){
            curr->next = curr->next->next;
        }else{
            curr = curr->next;
        }
    }

    return ini->next;
}