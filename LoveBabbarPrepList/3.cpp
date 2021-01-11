#include <climits>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {69, 22, 24, 8, 9, 4, 55, 7, 2};
    int k;
    cin >> k;

    sort(arr, arr + 9);
    cout << arr[k - 1];

    //for kth min check from last
}
