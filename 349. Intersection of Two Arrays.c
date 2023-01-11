/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int comp(const void *x, const void *y){
    return *(int*) x - *(int*) y;
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    qsort(nums1, nums1Size, sizeof(int), comp);

    int* out = (int*)malloc(1000*sizeof(int));
    int index = 0;

    int prev1 = -1;

    for(int i = 0; i < nums1Size; i++){
        
        if(prev1 == nums1[i]){
            continue;
        }
        prev1 = nums1[i];

        for(int j = 0; j < nums2Size; j++){
            if(nums1[i] == nums2[j]){
                out[index] = nums1[i];
                index++;
                break;
            }
        }
    }
    
    *returnSize = index;
    return out;
}