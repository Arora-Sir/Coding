import java.lang.*; 
public static void selectionSort(int[] arr) {
    int n = arr.length;
    int min = Integer.MIN_VALUE;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                arr[i] += arr[j];
                arr[j] = arr[i] -arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
}
