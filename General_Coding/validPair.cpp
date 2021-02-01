// https://practice.geeksforgeeks.org/problems/3b76f77c1b2107f809b1875aa9fe929ce320be97/1/?track=30-DOC-day-7&batchId=320#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution
{

public:
    long long ValidPair(int a[], int n)
    {
        long long ans = 0;
        sort(a, a + n);
        int start = 0, end = n - 1;
        while (start < end)
        {
            if (a[start] + a[end] > 0)
            {
                ans += end - start;
                end--;
            }
            else
                start++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; ++i)
            cin >> array[i];
        Solution obj;
        cout << obj.ValidPair(array, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends