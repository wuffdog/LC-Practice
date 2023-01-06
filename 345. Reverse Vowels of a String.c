char * reverseVowels(char * s){
    char vowels[] = "aeiouAEIOU";
    char* sv = (char*)malloc((strlen(s)+1) * sizeof(char));
    int index = 0;

    for(int i = 0; i < strlen(s); i++){
        if(strchr(vowels, s[i]) != NULL){
            sv[index] = s[i];
            s[i] = '*';
            index++;
        }
    }

    for(int i = 0; i < index/2; i++){
        char temp = sv[index - i - 1];
        sv[index - i - 1] = sv[i];
        sv[i] = temp;
    }

    index = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '*'){
            s[i] = sv[index];
            index++;
        }
    }

    free(sv);

    return s;
}