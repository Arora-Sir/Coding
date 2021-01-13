//Alternate positive and negative rearrange O(n)

// App 2: in O(n^2) -> find the first out of place element in the remaining unprocessed array. An element is out of place if it is negative and at odd index, or it is positive and at even index. Once we find an out of place element, we find the first element after it with opposite sign. We right rotate the subarray between these two elements (including these two).
// https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/

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
