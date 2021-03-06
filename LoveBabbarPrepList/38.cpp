//Search an element in Matrix

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    if (target < matrix[0][0])
        return false;
    int count = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        if (matrix[i][0] <= target)
            count++;
        else
            break;
    }
    count--;

    for (int j = 0; j < matrix[count].size(); j++)
    {
        if (matrix[count][j] == target)
            return true;
    }
    return false;
}

int main()
{
    vector<vector<int>> vec{{1, 2, 5}};
    int target = 2;
    int ans = searchMatrix(vec, target);
    cout << ans << endl;
}