import java.util.Scanner;

public class mergeSort {

    public static void mergeSort(int[] arr) {
        // Write your code here
        int len = arr.length;
        if (len <= 1)
            return;

        int mid = len / 2;

        int[] arr1 = new int[mid];
        int[] arr2 = new int[len - mid];
        for (int i = 0; i < mid; i++)
            arr1[i] = arr[i];
        for (int i = 0; i < arr2.length; i++)
            arr2[i] = arr[mid + i];

        mergeSort(arr1);
        mergeSort(arr2);

        for (int i = 0, j = 0, k = 0; i < len; i++) {
            // i for original, j for arr1, k for arr2
            // we can also merge two arrays by our method
            if (k >= arr2.length || (j < arr1.length && arr1[j] <= arr2[k])) {
                arr[i] = arr1[j];
                j++;
            } else {
                arr[i] = arr2[k];
                k++;
            }
        }

    }

    public static int[] takeInput() {
        Scanner s = new Scanner(System.in);
        int size = s.nextInt();
        int arr[] = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = s.nextInt();
        }
        return arr;
    }

    public static void printArray(int input[]) {
        for (int i = 0; i < input.length; i++) {
            System.out.print(input[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] input = takeInput();
        mergeSort(input);
        printArray(input);
    }
}
