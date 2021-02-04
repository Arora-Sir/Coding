public static void bubbleSort(int[] arr){
    int n = arr.length;
    // int min = Integer.MIN_VALUE;
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-j-1;i++){
                if(arr[i] > arr[i+1]){
                    arr[i] += arr[i+1];
                    arr[i+1] = arr[i] -arr[i+1];
                    arr[i] = arr[i] - arr[i+1];
                }
            }
    }
}