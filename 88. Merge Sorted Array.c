void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int arr[400];
    for(int i = 0; i < 400; i++){
        arr[i] = pow(10,9) + 1;
    }

    int index = 0;
    for(int i = 0; i < m; i++){
        arr[index] = nums1[i];
        index++;
    }

    for(int i = 0; i < n; i++){
        arr[index] = nums2[i];
        index++;
    }

    // The SORT™ syntax, copyleft KENT 2020 
    for(int j = 1; j < 400; j++){
        int key = arr[j];
        int i = j - 1;
        while(i >= 0 && arr[i] > key){
            arr[i + 1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }

    for(int i = 0; i < m+n; i++){
        nums1[i] = arr[i];
    }
}
