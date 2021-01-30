import java.util.Scanner;

public class pattern {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= n - i; j++) {
                System.out.print(j);
            }
            for (int j = 0; j < i * 2; j++)
                System.out.print("*");

            for (int j = n; j > i; j--) {
                System.out.print(j - i);
            }

            System.out.println();

        }
    }
}
