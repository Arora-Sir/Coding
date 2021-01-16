//factorial of LARGE no.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[10000];

        int carry = 0;
        arr[0] = 1;
        int arr_size = 0;
        while (n > 1)
        {
            for (int i = 0; i <= arr_size; i++)
            {
                int prod = arr[i] * n + carry;
                arr[i] = prod % 10;
                carry = prod / 10;
            }
            while (carry)
            {
                arr_size++;
                arr[arr_size] = carry % 10;
                ;
                carry = carry / 10;
            }
            carry = 0;
            n--;
        }
        for (int i = arr_size; i >= 0; i--)
            cout << arr[i];
        cout << endl;
    }
    return 0;
}