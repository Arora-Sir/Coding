//? https://practice.geeksforgeeks.org/problems/760a2a0627f1abf231de42b93bb71825ecbcb3b4/1/?track=30-DOC-day-12&batchId=320#

/*
1. Bit Difference 
Medium Accuracy: 100.0% Submissions: 945 Points: 4
Given an integer array of size  N.
You have to find sum of bit differences in all pairs that can be formed from array elements.
Bit difference of a pair (x, y) is count of different bits at same positions in binary representations of x and y.
For example, bit difference for 2 and 7 is 2. Binary representation of 2 is 010 and 7 is 111
( first and last bits differ in two numbers).

Example 1:
Input: N = 2, arr[] = {1, 2}
Output: 4
Explanation: All possible pairs are [(1,1) (1,2) 
(2,1) (2,2)] their respective Bit differences 
are 0 ,  2 , 2 , 0

Example 2:
Input: N = 5, arr[] = {3, 5, 2, 5, 2}
Output: 36
Your Task:  
You don't need to read input or print anything.
Complete the function sumBitDiff() which takes the array a[] and size of array N as input parameters and returns the answer

Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ arr[i] ≤ 108

Topic Tags
 Bit Magic

*/

/*
Naive Approach : To add set bits of xor of all pairs
i.e. sum += _builtin_popcountll(x^y)
* Time complexity : O(n^2)

Optimized Approach : Using logic of Naive approch
(i.e. 1^0=1 or 0^1=1) . As all numbers are represented using 32 bits ,
so traversing i from 0 to 31 we will count numbers with i’th bit set.
* Time complexity : O(n)

Step 1 - combination of all ones to all zeros pairs res= ones*(n-ones)
Step 2- since we have to count all pairs i.e. (0 to 1 ) and (1 to 0)
so res = 2*res
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution
{
public:
    long long sumBitDiff(int arr[], int n)
    {
        long long ans = 0;
        for (int i = 0; i < 32; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
                if ((arr[j] & (1 << i)))
                    count++;
            ans += (count * (n - count) * 2);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.sumBitDiff(arr, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
