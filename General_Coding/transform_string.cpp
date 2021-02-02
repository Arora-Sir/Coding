// https://practice.geeksforgeeks.org/problems/transform-string5648/1/?company[]=Directi&company[]=Directi&page=1&query=company[]Directipage1company[]Directi

// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int transform(string A, string B)
    {
        int m = A.length(), n = B.length();
        if (n != m)
            return -1;

        int count = 0;
        for (int i = n - 1, j = n - 1; i >= 0;)
        {
            while (i >= 0 && A[i] != B[j])
            {
                i--;
                count++;
            }

            if (i >= 0)
            {
                i--;
                j--;
            }
        }

        int hm[256];
        memset(hm, 0, sizeof(hm));
        for (int i = 0; i < n; i++)
            hm[A[i]]++;
        for (int i = 0; i < n; i++)
            hm[B[i]]--;
        for (int i = 0; i < 256; i++)
            if (hm[i])
                return -1;
        if (hm > 0)
            return count;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.transform(A, B) << endl;
    }
} // } Driver Code Ends