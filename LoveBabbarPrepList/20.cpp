//Alternate positive and negative rearrange O(n)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, -4, -1, 6, -9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = size - 1;

    for (int i = 0; i < size / 2; i++)
    {
        if (arr[start] >= 0)
            start++;
        if (arr[end] < 0)
            end--;

        if (arr[start] < 0 && arr[end] >= 0)
            swap(arr[start], arr[end]);
    }

    // {2   3   6   -1   -4   -9}
    //         end  start
    //now start points at negative first element

    if (start == 0 || start == size)
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    else
    {
        int beginning = 0;
        while (start < size && beginning < size)
        {
            swap(arr[start], arr[beginning]);
            start++;
            beginning += 2;
        }
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
}
