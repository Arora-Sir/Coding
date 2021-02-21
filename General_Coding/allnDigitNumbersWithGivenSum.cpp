/*
N-digit numbers with given sum
Send Feedback
You are given an integral value n and a sum value, you have to find all those n digit numbers whose digit sum is equal to the given sum.
Input Format:
The first line of input contains the value of n, and the second line of input contains the sum value.
Output Format:
The output contains all those space-separated n-digit numbers whose digit sum is equal to the given.
Constraints:
The value of n should lie between [1,20]
Sample Input:
6
2
Sample Output:
100001 100010 100100 101000 110000 200000
*/

#include <iostream>
#include <string>
using namespace std;
void find(string output, int n, int sum)
{
    if (n && sum >= 0)
    {
        char l = '0';
        if (output == "")
        {
            l = '1';
        }
        for (; l <= '9'; l++)
        {
            find(output + l, n - 1, sum - (l - '0'));
        }
    }
    else if (n == 0 && sum == 0)
    {
        cout << output << " ";
    }
}

/*
    CN Java Sol

    public class Solution
{
private
    static void find(String output, int n, int sum)
    {
        if (n > 0 && sum >= 0)
        {
            char l = '0';
            if (output == "")
            {
                l = '1';
            }
            for (; l <= '9'; l++)
            {
                find(output + l, n - 1, sum - (l - '0'));
            }
        }
        else if (n == 0 && sum == 0)
        {
            System.out.print(output + " ");
        }
    }
public
    static void find(int digits, int sum)
    {
        find("", digits, sum);
    }
}

    * /