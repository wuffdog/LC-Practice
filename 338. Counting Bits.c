/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* deToBi (int de, int* index);

int* countBits(int n, int* returnSize){
    *returnSize = n + 1;
    int* out = (int*)malloc(*returnSize * sizeof(int));

    for(int i = 0; i <= n; i++){
        int index = 0;
        int count = 0;
        int* bi = deToBi(i, &index);
        
        for(int j = 0; j < index; j++){
            if(bi[j] == 1){
                count++;
            }
        }

        out[i] = count;
        free(bi);
    } 
    
    return out;
}

int* deToBi (int de, int* index){
    int* bi = (int*)malloc(32 * sizeof(int));

    while(de > 0){
        bi[*index] = de % 2;
        de /= 2;
        *index = *index + 1;
    }
    
    return bi;
}