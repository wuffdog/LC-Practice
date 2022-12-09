int strStr(char * haystack, char * needle){
    char* occur;
    occur = strstr(haystack, needle);
    if(occur == NULL){
        return -1;
    }
    int num = occur - haystack;
    return num;
}