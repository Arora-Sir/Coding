//Kadane's Algorithm (Find the maximum Subarray)

int maxSubarraySum(int arr[], int n)
{
    int max_previous = INT_MIN;
    int max_now = 0;

    for (int i = 0; i < n; i++)
    {
        max_now += arr[i];
        if (max_previous < max_now)
        {
            max_previous = max_now;
        }
        //max_previous = max(max_now,max_previous);
        if (max_now < 0)
            max_now = 0;
    }
    return max_previous;

    //Exceeding time limit solution
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max) max=arr[i]; //-26
    // }
    // for(int i=0;i<n;i++){
    //     int submax=0;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j]+submax > max){
    //             submax += arr[j]; //5
    //             max=arr[i]+submax; //6
    //         }
    //         else submax += arr[j];
    //     }
    // }
    //return max;
}