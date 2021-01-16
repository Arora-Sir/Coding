//two pointer approach, O(n),O(1)


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<sb(a,n,x)<<endl;
	}
	return 0;
}// } Driver Code Ends


int sb(int arr[], int n, int x)
{
    int mini = INT_MAX;
    int i=0, j=0, sum=0;
    
    while(i<=j && j<n){
       
        while(sum<=x && j<n) sum += arr[j++];
        while(sum>x && i<j){
            mini = min(mini, j-i);
            sum -= arr[i];
            i++;
        }
    }
    return mini;
}