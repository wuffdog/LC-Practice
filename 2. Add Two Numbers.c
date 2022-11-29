/*
 * @lc app=leetcode id=2 lang=c
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int carry = 0;
    int index = 0;
    int a = 0;
    int b = 0;
    int sum = 0;
    int out = 0;
    int isNextA = 1;
    int isNextB = 1;
    struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l3_curr = l3;

    while(isNextA == 1 || isNextB == 1 || carry != 0){
        if(index == 0){
            index++;
        }else{
            l3_curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            l3_curr = l3_curr->next;
            index++;
        }

        if(isNextA == 1 || isNextB == 1){
            a = l1->val;
            b = l2->val;
            sum = a + b + carry;
            carry = 0;

            out = sum % 10;
            carry = sum / 10;
        
            l3_curr->val = out;

            if(l1->next == NULL){
                isNextA = 0;
                l1->val = 0;
            }else{
                l1 = l1->next;
            }

            if(l2->next == NULL){
                isNextB = 0;
                l2->val = 0;
            }else{
            l2 = l2->next;
            }
        }else{
            out = carry;
            carry = 0;
            l3_curr->val = out;
        }
    }

    l3_curr->next = NULL;
    

    return l3;
}
// @lc code=end

