public class rotateByKelements {

    private static void reverse(int[] arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }

    public static void rotate(int[] arr, int d) {

        int n = arr.length;
        if (d != 0 && n != 0) {
            d %= n;
            reverse(arr, 0, n - 1);
            reverse(arr, 0, n - d - 1);
            reverse(arr, n - d, n - 1);
        }
    }
}