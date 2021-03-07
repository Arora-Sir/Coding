import java.util.Scanner;

public class checkNumberInArray {

    static Scanner s = new Scanner(System.in);

    public static void main(String[] args) {
        int n = s.nextInt();
        int input[] = new int[n];
        for (int i = 0; i < n; i++) {
            input[i] = s.nextInt();
        }
        int x = s.nextInt();
        System.out.println(checkNumber(input, x));
    }

    public static boolean checkNumber(int input[], int x) {
        if (input.length <= 0)
            return false;
        if (input[0] == x)
            return true;
        int[] arr = new int[input.length - 1];
        for (int i = 0; i < input.length - 1; i++)
            arr[i] = input[i + 1];
        return false || checkNumber(arr, x);
    }
}
