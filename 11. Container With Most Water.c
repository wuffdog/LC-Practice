int maxArea(int* height, int heightSize){
    int start_index = 0;
    int end_index = heightSize - 1;
    
    int temp_height = 0;
    int temp_length = 0;
    int temp_volume = 0;
    int max_volume = 0;
    
    while(start_index < end_index){
        temp_length = end_index - start_index;
        
        if(height[start_index] < height[end_index]){
            temp_height = height[start_index];
            start_index++;
        }else{
            temp_height = height[end_index];
            end_index--;
        }
        
        temp_volume = temp_length * temp_height;
        
        if(temp_volume > max_volume){
            max_volume = temp_volume;
        }
    }
    
    return max_volume;
}