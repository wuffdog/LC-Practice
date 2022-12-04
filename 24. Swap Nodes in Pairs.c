/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    struct ListNode* first_node = head;
    struct ListNode* second_node = head->next;
    
    first_node->next = swapPairs(second_node->next); // Recursion here
    second_node->next = first_node;
    
    return second_node;
}