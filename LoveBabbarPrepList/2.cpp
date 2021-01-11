#include <climits>
#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {1, 5, 6, 8, 9, 4, 3, 7, 2};
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << max << " " << min;
}
