
public class mergeTwoSortedArrays {

    public static int[] merge(int a[], int b[]) {
        int m = a.length;
        int n = b.length;
        int[] arr = new int[m + n];
        int k = 0;

        int i = 0, j = 0;
        while (i < m && j < n) {
            if (a[i] > b[j]) {
                arr[k] = b[j];
                k++;
                j++;
            } else {
                arr[k] = a[i];
                k++;
                i++;
            }
        }

        while (i < m) {
            arr[k] = a[i];
            i++;
            k++;
        }
        while (j < n) {
            arr[k] = b[j];
            j++;
            k++;
        }
        return arr;
    }
}