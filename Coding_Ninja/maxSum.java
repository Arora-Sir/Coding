/*
Given 2 sorted arrays (in increasing order), find a path through the intersections that produces maximum sum and return the maximum sum.
That is, we can switch from one array to another array only at common elements.
If no intersection element is present, we need to take sum of all elements from the array with greater sum.
*/

import java.util.Scanner;

public class maxSum {
    public static long maximumSumPath(int[] input1, int[] input2) {
        /*
         * Your class should be named Solution Don't write main(). Don't read input,
         * they are passed as function arguments. Return output and don't print it.
         * Taking input and printing output is handled automatically.
         */
        int i = 0, j = 0;
        long sum1 = 0, sum2 = 0, result = 0;
        int m = input1.length, n = input2.length;

        while (i < m && j < n) {
            if (input1[i] < input2[j])
                sum1 += input1[i++];
            else if (input1[i] > input2[j])
                sum2 += input2[j++];
            else {
                result += input1[i] + Math.max(sum1, sum2);
                sum1 = 0;
                sum2 = 0;
                i++;
                j++;
            }
        }
        while (i < m)
            sum1 += input1[i++];
        while (j < n)
            sum2 += input2[j++];
        result += Math.max(sum1, sum2);
        return result;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int m = s.nextInt();
        int input1[] = new int[m];
        for (int i = 0; i < m; i++) {
            input1[i] = s.nextInt();
        }
        int n = s.nextInt();
        int input2[] = new int[n];
        for (int i = 0; i < n; i++) {
            input2[i] = s.nextInt();
        }
        System.out.println(maximumSumPath(input1, input2));
    }

}