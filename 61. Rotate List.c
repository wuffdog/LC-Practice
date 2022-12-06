/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k){
    if(head == NULL || head->next == NULL){
        return head;
    }

    int k_mod;
    int num_node;

    struct ListNode* count = head;

    while(count != NULL){
        count = count->next;
        num_node++;
    }

    k_mod = k % num_node;

    while(k_mod > 0){
        struct ListNode* tail = head;
        while(tail->next->next != NULL){
            tail = tail->next;
        }

        tail->next->next = head;
        head = tail->next;
        tail->next = NULL;

        k_mod--;
    }
    
    return head;
}