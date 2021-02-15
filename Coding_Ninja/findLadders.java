/*
Given an integer array A of size n. Find and print all the leaders present in the input array. An array element A[i] is called Leader, if all the elements following it (i.e. present at its right) are less than or equal to A[i].
Print all the leader elements separated by space and in the reverse order. That means whichever leader comes at last should be printed first.
*/
import java.util.*;

public class findLadders {

    public static void leaders(int[] input) {
        int max = Integer.MIN_VALUE;
        for (int j = input.length - 1; j >= 0; j--) {
            if (input[j] >= max) {
                System.out.print(input[j] + " ");
                max = input[j];
            }
        }
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int input[] = new int[n];
        for (int i = 0; i < n; i++) {
            input[i] = s.nextInt();
        }
        leaders(input);
    }

}
