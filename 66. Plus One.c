/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    *returnSize = digitsSize + 1;
    int* out = (int*)malloc((*returnSize)*sizeof(int));
    for(int i = 0; i < *returnSize; i++){
        if(i == 0){
            out[i] = 0;
        }else{
            out[i] = digits[i-1];
        }
    }

    int carry = 0;
    for(int i = *returnSize - 1; i >=0; i--){
        if(out[i] + 1 == 10){
            out[i] = 0;
            carry = 1;
        }else{
            out[i] = out[i] + 1;
            break;
        }

    }

    if(out[0] == 0){
        *returnSize = *returnSize - 1;
        for(int i = 0; i < *returnSize; i++){
            out[i] = out[i+1];
        }  
    }
    return out;
}