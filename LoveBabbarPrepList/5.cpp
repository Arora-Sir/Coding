#include <climits>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {-4, 4, -6, 12, -66, 0};
    int start = 0;
    int end = 6 - 1;

    while (start < end)
    {
        while (arr[start] < 0)
            start++;
        while (arr[end] > 0)
            end--;

        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
