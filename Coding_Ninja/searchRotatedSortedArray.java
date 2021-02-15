// O(log n)

// Input
// 5
// 4 5 1 2 3
// 1
// Output: 2

// find the largest element (pivot element) nd it's index by seeking mid again and again with binary approach
// then do binary search in both side of pivot element

//pivot is the element for which it's prev and next both are smaller than it
// if mid is smaller than start, pivot lies in first half otherwise second half

import java.util.Arrays;
import java.util.Scanner;

class searchRotatedSortedArray {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = s.nextInt();
        int find = s.nextInt();
        System.out.println(solution(arr, n, find));
        s.close();
    }

    public static int solution(int arr[], int n, int find) {
        if (n == 0)
            return -1;
        int pivot = findPivot(arr, 0, n - 1, n);

        int firstHalf = Arrays.binarySearch(arr, 0, pivot + 1, find);
        if (firstHalf >= 0) // binary search will return -1 if not found
                            //! start index (Inclusive), end index (Exclusive)
            return firstHalf;
        else {
            int secondHalf = Arrays.binarySearch(arr, pivot + 1, n, find);
            return secondHalf >= 0 ? secondHalf : -1;
        }

    }

    public static int findPivot(int[] arr, int start, int end, int size) {
        if (start == end)
            return start;
        int mid = (start + end) / 2;

        int prev = (mid - 1 + size) % size; // ! +size , so go to last element when reached the first element
        int next = (mid + 1) % size;

        if (arr[mid] > arr[prev] && arr[mid] > arr[next])
            return mid; // we have found the pivot element
        else if (arr[mid] < arr[start])
            return findPivot(arr, start, prev, size);
        else
            return findPivot(arr, next, end, size);

    }
}
