/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* ini = (struct ListNode*)malloc(sizeof(struct ListNode));
    ini->val = -1;
    ini->next = head;
    
    struct ListNode* curr = ini;

    while(curr->next != NULL){
        if(curr->next->val == val){
            curr->next = curr->next->next;
        }else{
            curr = curr->next;
        }
    }
    
    return ini->next;
}