
public static int binarySearch(int[] arr, int x) {
    int n = arr.length;
    int start = 0, end=n-1, mid = n/2;
    while(start<end){
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) start =mid+1;
        else if(arr[mid] > x) end =mid-1;
        mid = (start+end)/2;
    }
    return -1;
}