/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int pt1 = 0;
    int pt2 = numbersSize - 1;
    int isBreak = 0;
    
    while(pt1 < pt2){
        if(numbers[pt1] + numbers[pt2] < target){
            pt1++;
        }else if(numbers[pt1] + numbers[pt2] > target){
            pt2--;
        }else{
            break;
        }
    }
    
    pt1++;
    pt2++;
    
    *returnSize = 2;
    int* out = (int*)malloc(*returnSize*sizeof(int));
    
    out[0] = pt1;
    out[1] = pt2;
    
    return out;
}