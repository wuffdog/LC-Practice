/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1 == NULL && list2 == NULL){return NULL;}
    
    int isEnd1 = 0;
    int isEnd2 = 0;
    
    if(list1 == NULL){isEnd1 = 1;}
    if(list2 == NULL){isEnd2 = 1;}
     
    struct ListNode* out_list = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* curr_list = out_list;
    
    while(1){
        
        if(isEnd1 == 0 && isEnd2 == 0){
            if(list1->val <= list2->val){
                curr_list->val = list1->val;
                list1 = list1->next;
            }else{
                curr_list->val = list2->val;
                list2 = list2->next;
            }
        }
        
        if(isEnd1 == 0 && isEnd2 == 1){
            curr_list->val = list1->val;
            list1 = list1->next;
        }
        
        if(isEnd1 == 1 && isEnd2 == 0){
            curr_list->val = list2->val;
            list2 = list2->next;
        }
        
        if(list1 == NULL){isEnd1 = 1;}
        if(list2 == NULL){isEnd2 = 1;}
        
        if(isEnd1 == 1 && isEnd2 == 1){
            curr_list->next = NULL;
            break;
        }else{
            curr_list->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            curr_list = curr_list->next;
        }
        
    }
    
    return out_list;
}
