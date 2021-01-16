//Minimum swaps to small than K together, SLIDING WINDOW TECHNQUE O(N)




// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <iostream>
using namespace std;


int minSwap(int *arr, int n, int k);

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        cout << minSwap(arr, n, k) << "\n";
    }
	return 0;
}
// } Driver Code Ends

#include<bits/stdc++.h>
int minSwap(int *arr, int n, int k) {
    // Complet the function
    
    //SLIDING WINDOW TECHNIQUE ->Take array of good legth, the elements >k in tha will be our ANS
    
    int good=0; //elements less than or = k
    int bad=0; //elements greater than k
    int mini = INT_MAX;
    
    for(int i=0;i<n;i++) if(arr[i]<=k) good++;
    //now we have to check only first good elements and in that bad will be the ans
    for(int i=0;i<good;i++) if(arr[i]>k) bad++;
    //now bad counts all the elemtns greater
    
    int i = 0, j=good-1; //starting to ending of good 
    
    //SLIDING window technique Used
    
    while(j<n){  //condition to go to last
        mini = min(mini,bad);
        j++;
        if(j<n && arr[j]>k) bad++;  //to check next elemnt of good end
        if(arr[i]>k) bad--; //to check first element of good start
        i++;
    }
    if(mini == INT_MAX) return 0;
    else return mini;
}
