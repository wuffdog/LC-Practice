int lengthOfLongestSubstring(char * s){
    int index = 0;
    int ASCII[128];
    int max = 0;
    int counter = -1;
    int length = strlen(s);
    int char_num = -1;
    int isBreak = 0;
    
    while(s[index] != NULL){
        for(int i = 0; i < 128; i++){
            ASCII[i] = 0;
        }
        counter = 0;
        isBreak = 0;
        
        for(int j = 0; j < length-index; j++){
            char_num = s[index + j];
            ASCII[char_num]++;
            
            for(int k = 0; k < 128; k++){
                if(ASCII[k] > 1){
                    isBreak = 1;
                    if(isBreak == 1){
                        break;
                    }
                }
            }
            
            if(isBreak == 1){
                break;
            }
            
            counter++;
        }
        
        if(counter > max){
            max = counter;
        }
        
        index++;
    }
    return max;
}
