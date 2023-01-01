char * getHint(char * secret, char * guess){
    int sLen = strlen(secret);
    int gLen = strlen(guess);

    int A = 0;
    int B = 0;

    for(int i = 0; i < sLen; i++){
        if(secret[i] == guess[i]){
            A++;
            secret[i] = '*';
            guess[i] = '*';
        }
    }

    int sCount[10];
    int gCount[10];
    for(int i = 0; i < 10; i++){
        sCount[i] = 0;
        gCount[i] = 0;
    }

    for(int i = 0; i < sLen; i++){
        if(secret[i] != '*'){
            sCount[secret[i] - '0']++;
        }

        if(guess[i] != '*'){
            gCount[guess[i] - '0']++;
        }
    }


    for(int i = 0; i < 10; i++){
        if(sCount[i] > gCount[i]){
            B += gCount[i];
        }else{
            B += sCount[i];
        }
    }

    char* ans = (char*)malloc(9 * sizeof(char));
    sprintf(ans, "%dA%dB", A, B);

    return ans;
}