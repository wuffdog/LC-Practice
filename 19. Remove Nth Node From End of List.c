/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* ini = (struct ListNode*)malloc(sizeof(struct ListNode));
    ini->val = -1;
    ini->next = head;
    
    struct ListNode* counter = ini;
    int total = 0;
    
    while(counter != NULL){
        counter = counter->next;
        total++;
    }

    int num_removed = total - n;
    struct ListNode* removed = ini;
    
    for(int i = 1; i < num_removed; i++){
        removed = removed->next;
    }

    removed->next = removed->next->next;

    return ini->next;
}