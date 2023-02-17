char * longestCommonPrefix(char ** strs, int strsSize){
    int OutLength = -1;
    int ContinueSearch = 1; 
    while(ContinueSearch){
        OutLength = OutLength + 1;
        char letter = strs[0][OutLength];
        for(int i = 0; i < strsSize; i++){
            if(strs[i][OutLength] == NULL){
                ContinueSearch = 0;
            }
            if(strs[i][OutLength] != letter){
                ContinueSearch = 0;
            }   
        }
    }
    char* out = (char*)malloc((OutLength + 1) * sizeof(char));
    for(int i = 0; i < OutLength; i++){
        out[i] = strs[0][i];
    }
    out[OutLength] = NULL;
    return out;
}