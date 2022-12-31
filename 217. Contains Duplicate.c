int comp(const void *x, const void *y){
    return *(int*) x - *(int*) y;
}

bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), comp);

    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] == nums[i + 1]){
            return true;
        }
    }

    return false;
}