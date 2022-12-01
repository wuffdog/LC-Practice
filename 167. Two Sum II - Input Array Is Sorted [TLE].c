// Time Limit Exceeded

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int pt1 = 0;
    int pt2;
    int isBreak = 0;
    
    while(pt1 < numbersSize - 1){
        pt2 = pt1 + 1;
        
        while(pt2 < numbersSize){
            if(numbers[pt1] + numbers[pt2] == target){
                isBreak = 1;
                break;
            }
            pt2++;
        }
        
        if(isBreak == 1){
            break;
        }
        
        pt1++;
        
    }
    
    pt1++;
    pt2++;
    
    *returnSize = 2;
    int* out = (int*)malloc(*returnSize*sizeof(int));
    
    out[0] = pt1;
    out[1] = pt2;
    
    return out;
}