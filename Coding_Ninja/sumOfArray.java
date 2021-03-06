import java.util.Scanner;

public class sumOfArray {

    static Scanner s = new Scanner(System.in);

    public static void main(String[] args) {
        int n = s.nextInt();
        int input[] = new int[n];
        for (int i = 0; i < n; i++) {
            input[i] = s.nextInt();
        }
        System.out.println(sum(input));
    }

    public static int sum(int input[]) {
        // return
        if (input.length == 0)
            return 0;
        int[] arr = new int[input.length - 1];
        for (int i = 0; i < input.length - 1; i++)
            arr[i] = input[i + 1];
        return input[0] + sum(arr);
    }

    public static int sum2(int input[], int start) {
        // return sum recursively.
        if (input.length - start <= 0)
            return 0;
        return input[start] + sum2(input, start + 1);
    }
}
