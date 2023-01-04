int comp(const void *x, const void *y){
    return *(int*) x - *(int*) y;
}

int missingNumber(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), comp);
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != i){
            return i;
        }
    }
    return numsSize;
}