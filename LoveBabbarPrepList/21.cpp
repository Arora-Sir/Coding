//find if there is a 0 sum subarray O(n),O(n)

#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    int sum=0;
    unordered_map <int,int> map; //to check if element in PREFIX (adding in map) is repeating or not. if repeat in PREFIX (map), that means sub array exists
    int fals =0;
    
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(arr[i] == 0  ||  map[sum]  ||  sum==0){
            fals =1;
            break;
        }
        else{
            map[sum]++;
        }
    }
    if(fals==1) return 1;
    else return 0;
    
}

