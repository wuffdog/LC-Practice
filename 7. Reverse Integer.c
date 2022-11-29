int reverse(int x){

    if(x < -2147483647 || x > 2147483647){
        return 0;
    }

    int isNeg = 0;
    if(x < 0){
        isNeg = 1;
        x *= -1;
    }

    char num[16];
    sprintf(num, "%d", x);

    int length;
    length = strlen(num);

    char rev[16];
    for(int i = 0; i < length; i++){
        rev[i] = num[length-1-i]; 
    }
    rev[length] = NULL;

    printf("%s\n", rev);

    long out;
    out = strtol(rev, NULL, 10);

    if(isNeg == 1){
        out *= -1;
    }

    printf("%d", out);

    if(out < -2147483648 || out > 2147483647){
        return 0;
    }

    return out;
}
