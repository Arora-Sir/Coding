//App 1. new array → store starting k elements → print new array after n-k
//App 2. rotate by one element and do it for k times.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5 - 1;
    int size = 5;

    cout << "Terms you want to rotate" << endl;
    int k;
    cin >> k;
    k = k % 5;
    //App 1
    while (k--)
    {
        int x = arr[0];
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n] = x;
    }

    //App2

    // int newarr[k];
    // for (int i = 0; i < k; i++)
    // {
    //     newarr[i] = arr[i];
    // }
    // for (int j = 0; j < n - k + 1; j++)
    // {
    //     arr[j] = arr[j + k];
    // }

    // for (int j = 0; j < k; j++)
    // {
    //     arr[j + n - k + 1] = newarr[j];
    // }

    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
}
