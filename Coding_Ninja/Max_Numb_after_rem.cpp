//WRONG WRONG WRONG -> check java code

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 1324;
    int numSave = num;
    int mini = INT_MAX;
    int newNum = 0, mul = 1;

    while (num > 0)
    {
        int temp = num % 10;
        if (temp < mini)
            mini = temp;
        num /= 10;
    }
    while (numSave > 0)
    {
        int temp = numSave % 10;
        if (temp != mini)
        {
            newNum += temp * mul;
            mul *= 10;
        }
        numSave /= 10;
    }
    cout << newNum << endl;
}
