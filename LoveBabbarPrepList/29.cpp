//Tapping Water in between buildings

//App 1 : O(n^2), O(1) → Calculate minimum from both sides of element to get maximum reachable height → sum += min(left, right)-a[i]
//App 2 : O(n),O(n) → Store in 2 arrays left[n] (calculating max from left for every element),right[n] (from right) → sum += min(left[i], right[i])-a[i]
//App 3 : O(n),O(1) → Two pointer approach from left_most and right_most (done here)

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n)
{

    int sum = 0;
    int end = n - 1;
    int start = 0;
    int startmax = 0; //left max height
    int endmax = 0;   //right max height

    while (start < end)
    {
        if (arr[start] < arr[end])
        {
            if (arr[start] >= startmax)
                startmax = arr[start];
            else
                sum += startmax - arr[start];
            start++;
        }
        else
        {
            if (arr[end] >= endmax)
                endmax = arr[end];
            else
                sum += endmax - arr[end];
            end--;
        }
    }
    return sum;
}

// { Driver Code Starts.

int main()
{

    int t;
    //testcases
    cin >> t;

    while (t--)
    {
        int n;

        //size of array
        cin >> n;

        int a[n];

        //adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends