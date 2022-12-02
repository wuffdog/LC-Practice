bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    int nums[10];
    
    // Each row must contain the digits 1-9 without repetition.
    for(int i = 0; i < 9; i++){
        
        for(int array = 0; array <= 9; array++){
            nums[array] = 0;
        }
        
        for(int j = 0; j < 9; j++){
            if(board[i][j] == '.') {nums[0]++; }
            else if(board[i][j] == '1') {nums[1]++; }
            else if(board[i][j] == '2') {nums[2]++; }
            else if(board[i][j] == '3') {nums[3]++; }
            else if(board[i][j] == '4') {nums[4]++; }
            else if(board[i][j] == '5') {nums[5]++; }
            else if(board[i][j] == '6') {nums[6]++; }
            else if(board[i][j] == '7') {nums[7]++; }
            else if(board[i][j] == '8') {nums[8]++; }
            else if(board[i][j] == '9') {nums[9]++; }
        }
        
        for(int array = 1; array <= 9; array++){
            if(nums[array] > 1) {return false; }
        }
        
    }
    
    
    // Each column must contain the digits 1-9 without repetition.
    for(int i = 0; i < 9; i++){
        
        for(int array = 0; array <= 9; array++){
            nums[array] = 0;
        }
        
        for(int j = 0; j < 9; j++){
            if(board[j][i] == '.') {nums[0]++; }
            else if(board[j][i] == '1') {nums[1]++; }
            else if(board[j][i] == '2') {nums[2]++; }
            else if(board[j][i] == '3') {nums[3]++; }
            else if(board[j][i] == '4') {nums[4]++; }
            else if(board[j][i] == '5') {nums[5]++; }
            else if(board[j][i] == '6') {nums[6]++; }
            else if(board[j][i] == '7') {nums[7]++; }
            else if(board[j][i] == '8') {nums[8]++; }
            else if(board[j][i] == '9') {nums[9]++; }
        }
        
        for(int array = 1; array <= 9; array++){
            if(nums[array] > 1) {return false; }
        }
        
    }
    
    for(int i = 0; i < 9; i += 3){
        for(int j = 0; j < 9; j += 3){
            
            for(int array = 0; array <= 9; array++){
                nums[array] = 0;
            }
            
            for(int a = 0; a < 3; a++){
                for(int b = 0; b < 3; b++){
                    if(board[i + a][j + b] == '.') {nums[0]++; }
                    else if(board[i + a][j + b] == '1') {nums[1]++; }
                    else if(board[i + a][j + b] == '2') {nums[2]++; }
                    else if(board[i + a][j + b] == '3') {nums[3]++; }
                    else if(board[i + a][j + b] == '4') {nums[4]++; }
                    else if(board[i + a][j + b] == '5') {nums[5]++; }
                    else if(board[i + a][j + b] == '6') {nums[6]++; }
                    else if(board[i + a][j + b] == '7') {nums[7]++; }
                    else if(board[i + a][j + b] == '8') {nums[8]++; }
                    else if(board[i + a][j + b] == '9') {nums[9]++; }
                }
            }
            
            for(int array = 1; array <= 9; array++){
                if(nums[array] > 1) {return false; }
            }
        
        }
    }
    
    return true;
}