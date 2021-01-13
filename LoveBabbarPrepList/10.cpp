//Minimum jumps needed to reach the end of array
//App 1: Time Limit exceeded (Mine - Not minimum)
//App 2: DP Approach (O^2) (Correct but still exceed)
//App 3: O(n) Accepted

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int minJumps(int arr[], int n)
    {
        //App 1 : But Time limit excedded somehow
        int count = 0;
        int settle = 0;
        int previous_settle = 0;
        while (settle < n)
        {
            settle = arr[previous_settle]; //1 3 9
            count++;
            previous_settle += settle; //1 4 13
            if (previous_settle >= n)
                break;
        }
        return count;

        //App 2 : DP Approach O(n^2)
        int dp[n];
        for (int i = 0; i < n; i++)
            dp[i] = INT_MAX;
        dp[0] = 0; //with 0 jump

        for (int i = 1; i < n; i++) //coz we have to find min. possible from index i to large index
        {
            for (int j = 0; j < i; j++) //from 0 to i, is there any way to come to ith position in minimum way
            {
                if (dp[j] != INT_MAX && (arr[j] + j >= i)) //can we reach j && from the ith position (max reachable position )
                {
                    if (dp[j] + 1 < dp[i]) //jth position pe minimum way mein pohnch sakte hein (so update this)
                        dp[i] = dp[j] + 1; //dp of jump + 1
                }
            }
        }
        if (dp[n - 1] != INT_MAX) //i.e we have reached to final position
            return dp[n - 1];
        else
            return -1;

        //App 3: O(n) Accepted                                                      i = 1
        int maxR = arr[0];  //Maximum Reach (Ladder)                                 maxR = a[i]
        int steps = arr[0]; //Steps on ladder                                       steps = a[i]
        int jumps = 1;      //jumps = 1
        if (n == 1)         //base case
            return 0;
        else if (arr[0] == 0) //base case
            return -1;
        else
        {
            for (int i = 1; i < n; i++) //0 already done (jump one already)
            {

                if (i == (n - 1)) //if it is at end of array, so return ans
                    return jumps;
                maxR = max(maxR, i + arr[i]); //ladder can reach till here
                steps--;                      //ek step aage chale gaye ladder ke
                if (steps == 0)               //ladder over
                {
                    jumps++;       //so jum need
                    if (i >= maxR) //5 8(maxR here) 9 2 6 7(i here) 5, so answer not possible
                        return -1;
                    steps = maxR - i; //5(i here) 8 9(maxR here) 2 6 7 5     This will ensure the minimum no. of steps needed
                }
            }
        }
    }
}