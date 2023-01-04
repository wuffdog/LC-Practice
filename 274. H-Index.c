int hIndex(int* citations, int citationsSize){
    int out = 0;

    for(int i = 1; i <= citationsSize; i++){
        int counter = 0;

        for(int j = 0; j < citationsSize; j++){
            if(citations[j] >= i){
                counter++;
            }
        }

        if(counter >= i){
            out = i;
        }
    }

    return out;
}