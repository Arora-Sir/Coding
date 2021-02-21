/*
Number of ways
Send Feedback
You are given an array of n elements and a sum value, you have to calculate the total number of ways to calculate the given sum using the elements of the array by using only addition(+) and subtraction operator(-).
Input Format:
The first line of input contains the number of array elements(n). The next line contains the input array and the last line of input contains the value of sum we want to calculate.
Output Format:
The only output line contains the total number of ways to get the given sum value.
Constraints:
Value of n should lie between [1,15]
Sample Input:
5
-1 9 8 -3 4
5
Sample Output:
8
Explanation:
The ways to get 5 as sum are:
(+)-3 (+)9 (+)-1 
(+)-3 (+)8 
(-)-3 (-)8 (+)9 (-)-1 
(+)4 (-)-1 
(+)4 (-)8 (+)9 
(+)4 (-)-3 (+)8 (-)9 (+)-1 
(-)4 (+)9 
(-)4 (+)8 (-)-1 
*/

int ways(int *input, int n, int start, int sum)
{

    if (sum == 0 && start == n)
        return 1;
    if (start >= n)
        return 0;
    return ways(input, n, start + 1, sum) + ways(input, n, start + 1, sum - input[start]) + ways(input, n, start + 1, sum + input[start]);
}

int number(int *input, int n, int sum)
{
    //Write your code here
    if (n == 0)
        return 0;
    int ans = ways(input, n, 0, sum);
    if (sum == 0)
        return ans - 1;
    return ans;
}

/*
    CN JAVA SOL

        import java.util.Scanner;
public
class Solution
{
public
    static int numberOfWays(int input[], int sum, int startIndex, int currentSum)
    {
        if (startIndex >= input.length)
        {
            if (currentSum == sum)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        int withoutFirstEleme = numberOfWays(input, sum, startIndex + 1, currentSum);
        int withFirstEleemnt_pos = numberOfWays(input, sum, startIndex + 1, currentSum + input[startIndex]);
        int withFirstEleemnt_neg = numberOfWays(input, sum, startIndex + 1, currentSum - input[startIndex]);
        int possibleAns = withoutFirstEleme + withFirstEleemnt_pos +
                          withFirstEleemnt_neg;
        return possibleAns;
    }
public
    static int numberOfWays(int[] input, int sum)
    {
        int possibleAns = numberOfWays(input, sum, 0, 0);
        if (sum == 0)
        {
            return possibleAns - 1; //Case for the first recursive call when all the lements
            are excluded
        }
        else
        {
            return possibleAns;
        }
    }
}

    * /