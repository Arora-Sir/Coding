import java.util.*;
import java.lang.*;

public class chocolateDistribution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }
        int m = s.nextInt();

        int mini = Integer.MAX_VALUE;
        Arrays.sort(arr);

        for (int i = 0; i <= n - m; i++)
            mini = Math.min(mini, arr[i + m - 1] - arr[i]);

        System.out.println(mini);
        s.close();

    }

}