//Median of Array

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends

class Solution
{
public:
public:
    int find_median(vector<int> v)
    {
        sort(v.begin(), v.end());
        int size = v.size();
        if (size % 2 == 0)
        {
            int x = (size / 2) - 1;
            int y = x + 1;
            int z = (v[x] + v[y]) / 2;
            return z;
        }
        else
        {
            int x = size / 2;
            return v[x];
        }
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        Solution ob;
        int ans = ob.find_median(v);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends