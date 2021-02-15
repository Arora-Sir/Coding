import java.util.Scanner;

public class gatherRainWater {

    public static int trappingWater(int arr[], int n) {

        int sum = 0;

        int end = n - 1;
        int start = 0;

        int startmax = 0;
        int endmax = 0;

        while (start < end) {
            if (arr[start] < arr[end]) {
                if (arr[start] >= startmax)
                    startmax = arr[start];
                else
                    sum += startmax - arr[start];
                start++;
            } else {
                if (arr[end] >= endmax)
                    endmax = arr[end];
                else
                    sum += endmax - arr[end];
                end--;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }
        int water = trappingWater(arr, n);
        System.out.print(water);
        s.close();

    }

}