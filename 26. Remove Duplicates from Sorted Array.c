int removeDuplicates(int* nums, int numsSize){
    int* array = (int*)malloc(numsSize * sizeof(int));
    int counter = 0;
    int temp = -101; // Cuz -100 <= nums[i] <= 100
    
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != temp){
            array[counter] = nums[i];
            counter++;
        }
        temp = nums[i];
    }
    
    for(int i = 0; i < counter; i++){
        nums[i] = array[i];
    }
    
    free(array);
    
    return counter;
}