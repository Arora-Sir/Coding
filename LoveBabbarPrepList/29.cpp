//Tapping Water


// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){
    
    int sum=0;
    int end=n-1;
    int start=0;
    int startmax =0;
    int endmax =0;
    
    while(start<end){
        if(arr[start] < arr[end]){
            if(arr[start] >= startmax) startmax = arr[start];
            else sum+= startmax-arr[start];
            start++;
        }
        else{
            if(arr[end] >= endmax) endmax = arr[end];
            else sum+= endmax-arr[end];
            end--;
        }
    }
    return sum;
}

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends