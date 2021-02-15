//Asked in Samsung Interview

//Approach 1 : find 7! permutations and see the next element but Aghh...so lengthy..
//Approach 2 : make 2 arrays with frequency of original and while(original++) number till the freq gets same and we'll return it

//*Approach 3:
// eg: 8 2 6 5 4 1 0
// find the 1st decreasing value from the last  i.e 2
// swap it with the smallest element from the last till that Number i.e 8 4 6 5 2 1 0
// and reverse the array from swapped to end i.e 8 4 0 1 2 5 6

import java.util.Scanner;

public class successorProblem {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        long n = s.nextInt();
        long ans = findSuccessor(n);
        System.out.print(ans);
        s.close();
    }

    public static long reverse(long n) {
        long reversed = 0;
        while (n > 0) {
            long digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }
        return reversed;
    }

    public static long findSuccessor(long n) {
        String s = Long.toString(n);
        int size = s.length();

        long arr[] = new long[size];
        int k = size - 1;
        long num = n;
        while (num > 0) {
            arr[k] = num % 10;
            num /= 10;
            k--;
        }

        int indexOfFirstSmallerDigit = -1;
        for (int i = s.length() - 2; i >= 0; i--) {
            if (s.charAt(i) < s.charAt(i + 1)) {
                indexOfFirstSmallerDigit = i;
                break;
            }
        }
        // eg: 8 2 6 5 4 1 0 i.e i=1
        // It means S is in non ascending order so return -1
        if (indexOfFirstSmallerDigit == -1)
            return reverse(n);

        long nextMini = arr[indexOfFirstSmallerDigit]; // mini = 2
        int j;
        for (j = size - 1; j > indexOfFirstSmallerDigit; j--) {
            if (arr[j] > nextMini) {
                nextMini = arr[j];
                break;
            }
        }

        // s[j] = 4 and s[index] = 2
        // swap 8 2 6 5 4 1 0
        arr[indexOfFirstSmallerDigit] += arr[j];
        arr[j] = arr[indexOfFirstSmallerDigit] - arr[j];
        arr[indexOfFirstSmallerDigit] = arr[indexOfFirstSmallerDigit] - arr[j];
        // swap: 8 4 6 5 2 1 0

        int start = indexOfFirstSmallerDigit + 1;
        int end = arr.length - 1;
        while (start < end) {
            arr[start] += arr[end];
            arr[end] = arr[start] - arr[end];
            arr[start] = arr[start] - arr[end];
            start++;
            end--;
        }
        // 8 4 0 1 2 5 6
        long ans = 0;
        for (int a = 0; a < arr.length; a++) {
            ans = ans * 10 + arr[a];
        }
        return ans;
    }
}

// ! Approach by string (as I don't know strings well till now hence done by
// upper approach)

// import java.util.Scanner;
// public class successorProblem {

// public static void main(String[] args) {
// Scanner s = new Scanner(System.in);
// long n = s.nextInt();
// long ans = findSuccessor(n);
// System.out.print(ans);
// }

// public static long reverse(long n){
// long reversed=0;
// while(n>0){
// long digit = n % 10;
// reversed = reversed * 10 + digit;
// n /= 10;
// }
// return reversed;
// }

// public static long findSuccessor(long n) {
// String s = Long.toString(n);
// int indexOfFirstSmallerDigit = -1;

// ? //traverse from (end-1) till I get decreasing element
// for (int i = s.length() - 2; i >= 0; i--) {
// if (s.charAt(i) < s.charAt(i + 1)) {
// indexOfFirstSmallerDigit = i;
// break;
// }
// }
// ? // It means S is in non ascending order so return -1
// if (indexOfFirstSmallerDigit == -1)
// return reverse(n);

// int[] a = new int[10]; // to store frequency of every element of S in a[]

// for (int i = 0; i < s.length(); i++)
// a[s.charAt(i) - '0']++; //? to get that int value: -'0'

// long ans = n + 1; //Just increase 1

// ? //too lengthy method as we check for every element after answer
// ? //and when frequency of elements is same of both a[] and b[]
// ? //then if(isEqual) works and while breaks and return ans
// while (true) {
// int[] b = new int[10]; // to store frequency of every element of ANS in b[]
// String t = Long.toString(ans);

// for (int i = 0; i < t.length(); i++)
// b[t.charAt(i) - '0']++;

// boolean isEqual = true;
// for (int i = 0; i < 10; i++) { //? compare a[] and b[]
// if (a[i] != b[i]) {
// isEqual = false;
// break;
// }
// }

// if (isEqual)
// break;

// ans++;
// }
// return ans;
// }
// }