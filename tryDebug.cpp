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

        long long int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int m;
        cin >> m;

        int min = INT_MAX;
        sort(arr, arr + n);

        for (int i = 0; i < n - m; i++)
        {
            if (arr[i + m] - arr[i] < min)
                min = arr[i + m] - arr[i];
        }
        cout << min << endl;
    }
    return 0;
}