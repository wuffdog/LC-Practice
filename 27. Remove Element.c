int removeElement(int* nums, int numsSize, int val){
    int rtSize = 0;
    int temp;
    
    for(int i = 0; i < numsSize; i++){
        temp = nums[i];
        if(temp != val){
            nums[rtSize] = temp;
            rtSize++;
        }
    }
    return rtSize;
}