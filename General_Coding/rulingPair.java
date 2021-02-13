/*
1. Ruling Pair 
Medium Accuracy: 100.0% Submissions: 851 Points: 4
Geek Land has a population of N people and each person's ability to rule the town is measured by a numeric value arr[i]. The two people that can together rule Geek Land must be compatible with each other i.e., the sum of digits of their ability arr[i] must be equal. Their combined ability should be maximum amongst all the possible pairs of people. Find the combined ability of the Ruling Pair.

Example 1:

Input:
N = 5
arr[] = {55, 23, 32, 46, 88}
Output:
101
Explanation:
All possible pairs that are 
compatible with each other are- (23, 32) 
with digit sum 5 and (55, 46) with digit 
sum 10. Out of these the maximum combined 
ability pair is (55, 46) i.e. 55 + 46 = 101
Example 2:

Input:
N = 4
arr[] = {18, 19, 23, 15}
Output:
-1
Explanation:
No two people are compatible with each other. 
Your Task:  
You don't need to read input or print anything. Complete the function RulingPair() which takes the array arr[] and size of array N as input parameters and returns the answer. If No two people are compatible with
each other then return -1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 105 
1 ≤ arr[i] ≤ 109

Topic Tags
Hash Arrays

*/

// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class rulingPair {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t > 0) {
            int n = sc.nextInt();
            int array[] = new int[n];
            for (int i = 0; i < n; i++) {
                array[i] = sc.nextInt();
            }
            Solution ob = new Solution();
            System.out.println(ob.RulingPair(array, n));
            t--;
        }
    }
}
// } Driver Code Ends
// User function Template for Java

class Solution {
    static int digitSum(int n) {
        int sum = 0;
        while (n != 0) {
            sum += (n % 10);
            n /= 10;
        }
        return sum;
    }

    static int RulingPair(int arr[], int n) {   //same approach using hashmap as down
        int map[] = new int[80];
        int ans = -1;
        for (int i = 0; i < n; i++) {
            int dSum = digitSum(arr[i]);
            if (map[dSum] != 0) {
                ans = Math.max(ans, map[dSum] + arr[i]);
            }
            map[dSum] = Math.max(map[dSum], arr[i]);
        }
        return ans;
    }

    // ! Execution time increased -> O(n log n)
    // ? Approach:
    // 1) First suppose if we have sum of digits of each number
    // 2) Then our task is to find same number from above with maximum sum
    // 3) We will use hashMap (key,pair)==(sum of digit , number)
    // we will store sum of digit as key and corresponding number as value
    // 4) Iterate on array:
    // a) If element not found in hashmap..add to hashmap
    // b)if element already found :
    // i) Then check if sum of num +curr is greater than previous sum
    // ii) Suppose current number is greater than hashmap number
    // then update number with current number

        // static int RulingPair(int arr[], int no) {
        //     HashMap<Integer, Integer> h = new HashMap<>();
        //     int sum = -1;
        //     for (int n : arr) {
        //         int dig = 0;
        //         int num = n;
        //         while (n != 0) {
        //             dig += (n % 10);
        //             n = n / 10;
        //         }
        //         if (h.containsKey(dig)) {
        //             int curr = h.get(dig);       // h.get -> jo othe pehlan da peya
        //             sum = Math.max(sum, curr + num);
        //             if (num > curr)
        //                 h.put(dig, num);
        //         } else
        //             h.put(dig, num);
        //     }
        //     return sum;
        // }
}