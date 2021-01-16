//Chocolate Distribution Problem

#include <climits>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int m;
        cin >> m;

        int mini = INT_MAX;
        sort(arr, arr + n);

        for (int i = 0; i <= n - m; i++)
            mini = min(mini, arr[i + m - 1] - arr[i]);

        cout << mini << endl;
    }
    return 0;
}