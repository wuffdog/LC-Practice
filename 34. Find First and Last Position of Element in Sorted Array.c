/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* out = (int*)malloc(*returnSize * sizeof(int));
    
    out[0] = -1;
    out[1] = -1;
    
    int head = 0;
    int tail = numsSize - 1;
    
    int head_found = 0;
    int tail_found = 0;
    
    while(head <= tail){
        if(head_found == 1 && tail_found == 1){break;}
        
        if(nums[head] < target){head++;}
        else if(nums[head] == target){
            out[0] = head; 
            head_found = 1;
        }
        
        if(nums[tail] > target){tail--;}
        else if(nums[tail] == target){
            out[1] = tail; 
            tail_found = 1;
        }
    }
    
    return out;
}