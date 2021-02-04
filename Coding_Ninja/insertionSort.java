public static void insertionSort(int[] arr) {
    	int n = arr.length;
        // int min = Integer.MIN_VALUE;
    	// int min = arr[0];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j>0;j--){
                
                if(arr[j] < arr[j-1]){
                    arr[j-1] += arr[j];
                    arr[j] = arr[j-1] -arr[j];
                    arr[j-1] = arr[j-1] - arr[j];
                }
                else break;
            }
        }
    }