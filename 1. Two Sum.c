/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* returnArray = (int*)malloc(*returnSize*sizeof(int));
    
    int index_a;
    int index_b;
    int isBreak = 0;
    int temp_a;
    int temp_b;

    for(index_a = 0; index_a < numsSize; index_a++){
        temp_a = nums[index_a];
        for (index_b = 0; index_b < numsSize; index_b++){
            if(index_a == index_b){
                continue;
            }
            temp_b = nums[index_b];
            if(temp_a + temp_b == target){
                isBreak = 1;
                break;
            }
        }
        if(isBreak){
            break;
        }
    }

    returnArray[0] = index_a;
    returnArray[1] = index_b;

    return returnArray;
}
// @lc code=end

