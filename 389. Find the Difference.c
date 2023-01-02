char findTheDifference(char * s, char * t){
    int sLen = strlen(s);
    int tLen = strlen(t);

    for(int i = 0; i < sLen; i++){
        for(int j = 0; j < tLen; j++){
            if(t[j] == s[i]){
                t[j] = '*';
                break;
            }
        }
    }

    for(int i = 0; i < tLen; i++){
        if(t[i] != '*'){
            return t[i];
        }
    }

    return NULL;
}