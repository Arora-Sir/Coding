#include <climits>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    //start from both sides and swap (my approach) -> 2 pointer approach
    //start from starting and if >0 found then swap with next <0 -> 1 pointer approach
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
