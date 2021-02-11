#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int B;
        cin >> B;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        int count = 0, start = 0;
        while (B >= arr[start])
        {
            B -= arr[start++];
            count++;
        }
        cout << "Case #" << i << ": " << count << endl;
        i++;
    }
}