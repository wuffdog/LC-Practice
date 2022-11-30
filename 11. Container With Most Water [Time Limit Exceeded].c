// Time Limit Exceeded

int maxArea(int* height, int heightSize){
    
    int start_index = 0;
    int max_volume = 0;
    int current_volume = 0;
    int current_height = 0;
    int current_length = 0;
    
    while(start_index < heightSize - 1){
        
        for(int i = start_index + 1; i < heightSize; i++){
            
            if(height[start_index] < height[i]){
               current_height = height[start_index];
            }else{
               current_height = height[i];
            }
            
            current_length = i - start_index;
            
            current_volume = current_height * current_length;
            
            if(current_volume > max_volume){
                max_volume = current_volume;
            }
            
        }
        
        start_index++;
    }
    
    return max_volume;

}