// Brute force O(n2)
// sort and check O(nlogn)

// XOR operation, which is associative and commutative O(n)
// Answer = (2^2) ^ (3^3) ^ 1 ^ (6 ^ 6)
//        = 0 ^ 0 ^ 1 ^ 0
//        = 1

public class Solution {

    public static int findUnique(int[] arr) {
        int XOR = 0;

        for (int i = 0; i < arr.length; i++)
            XOR ^= arr[i];

        return XOR;
    }
}