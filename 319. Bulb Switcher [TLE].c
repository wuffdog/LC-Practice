// Time Limit Exceeded

int bulbSwitch(int n){
    int* lights = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        lights[i] = 1;
    }

    for(int i = 2; i <= n; i++){
        for(int j = i; j <= n; j = j + i){
            if(lights[j - 1] == 0){
                lights[j - 1] = 1;
            }else{
                lights[j - 1] = 0;
            }
        }
    }

    int counter = 0;
    for(int i = 0; i < n; i++){
        if(lights[i] == 1){
            counter++;
        }
    }

    return counter;
}