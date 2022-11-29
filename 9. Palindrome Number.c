bool isPalindrome(int x){
    if(x < 0){
        return false;
    }else{
        char num[12];
        sprintf(num, "%d", x);
        int length = strlen(num);
            
        for(int i = 0; i < length; i++){
            if(num[i] != num[length - 1 - i]){
                return false;
            }
        }
        
        return true;
    }
}
