bool isValid(char * s){
    int list[10000];
    for(int i = 0; i < 10000; i++){
        list[i] = 0;
    }

    int s_index = 0;
    int l_index = 0;

    while(s[s_index] != NULL){
        if(s[s_index] == '('){
            list[l_index] = 1;
            l_index++;
        }else if(s[s_index] == ')'){
            l_index--;
            if(l_index < 0 || list[l_index] != 1){
                return false;
            }
            list[l_index] = 0;
        }else if(s[s_index] == '['){
            list[l_index] = 2;
            l_index++;
        }else if(s[s_index] == ']'){
            l_index--;
            if(l_index < 0 || list[l_index] != 2){
                return false;
            }
            list[l_index] = 0;
        }else if(s[s_index] == '{'){
            list[l_index] = 3;
            l_index++;
        }else if(s[s_index] == '}'){
            l_index--;
            if(l_index < 0 || list[l_index] != 3){
                return false;
            }
            list[l_index] = 0;
        }
        
        s_index++;
    }
    
    for(int i = 0; i < 10000; i++){
        if(list[i] != 0){
            return false;
        }
    }

    return true;
}
