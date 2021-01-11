// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int j = 5;
//     for (int i = 0; i < 3; i++, j--)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }

//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     reverse(arr.begin(), arr.end());
//     for (int i = 0; i < 6; i++)
//         cout << arr[i];
// }

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;
    int last = N - 1;

    int arr[N];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N / 2; i++, last--)
    {
        int temp = arr[i];
        arr[i] = arr[last];
        arr[last] = temp;
    }

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    // vector<int> arr = {1, 2, 3, 4, 5, 6};
    // reverse(arr.begin(), arr.end());
    // for (int i = 0; i < 6; i++)
    //     cout << arr[i];
}