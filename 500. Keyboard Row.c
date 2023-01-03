/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** findWords(char ** words, int wordsSize, int* returnSize){
    char rowA[] = "QWERTYUIOPqwertyuiop";
    char rowB[] = "ASDFGHJKLasdfghjkl";
    char rowC[] = "ZXCVBNMzxcvbnm";

    char** out = (char**)malloc(20 * sizeof(char*));

    for(int i = 0; i < 20; i++){
        out[i] = (char*)malloc(100 * sizeof(char));
    }

    *returnSize = 0;
    int countRow[3];

    for(int wordsI = 0; wordsI < wordsSize; wordsI++){
        countRow[0] = 0;
        countRow[1] = 0;
        countRow[2] = 0;

        for(int wI = 0; wI < strlen(words[wordsI]); wI++){
            if(strchr(rowA, words[wordsI][wI]) != NULL){
                countRow[0]++;
            }
            else if(strchr(rowB, words[wordsI][wI]) != NULL){
                countRow[1]++;
            }
            else if(strchr(rowC, words[wordsI][wI]) != NULL){
                countRow[2]++;
            }
        }

        if((countRow[0] > 0 && countRow[1] == 0 && countRow[2] == 0) 
            || (countRow[0] == 0 && countRow[1] > 0 && countRow[2] == 0) 
            || (countRow[0] == 0 && countRow[1] == 0 && countRow[2] > 0)){
                printf("%s\n", words[wordsI]);
                strcpy(out[*returnSize], words[wordsI]);
                printf("%s\n", out[*returnSize]);
                *returnSize = *returnSize + 1;
            }
    }

    return out;
}