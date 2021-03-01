// O(n2)
// xor by every natural no. till n-2 , O(n)
// sum of all the elements - sum of n-1 natural number, O(n)

public class Solution {

    public static int findDuplicate(int[] arr) {
        int sumOfNminusTwoNaturalNumbers = 0;
        for (int i = 0; i < (arr.length - 1); i++) {
            sumOfNminusTwoNaturalNumbers += i;
        }

        int sumOfElements = 0;
        for (int i = 0; i < arr.length; i++) {
            sumOfElements += arr[i];
        }

        return (sumOfElements - sumOfNminusTwoNaturalNumbers);
    }
}