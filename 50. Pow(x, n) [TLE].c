//	Time Limit Exceeded

double myPow(double x, int n){
    if(n < 0){
        x = 1/x;
        n = -n;
    }
    
    double out = 1;
    
    for(int i = 0; i < n; i++){
        out *= x;
    }
    
    return out;
}