import java.util.Scanner;
import java.lang.Math;

public class Probability {

    static int factorial(int x) {
        int ans = x;
        for (int i = ans - 1; i > 0; i--)
            ans = ans * i;
        return ans;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int x = s.nextInt();
        int xx = x;

        int balls = 8, red = 4, blue = 2, green = 2;
        int bballs = balls;

        double answer = 1.0;
        if (x > n || n > 8 || x > 4) {
            System.out.println("0");
            return;
        }

        if (x != 0) {
            for (int i = 0; i < n; i++) {
                if (balls == 0)
                    break;
                if (x > 0) {
                    answer *= ((double) red / balls);
                    red--;
                    x--;
                } else {
                    answer *= ((double) 1.0);
                }

                balls--;
            }
            System.out.println((int) (answer * 100));
        }

        if (xx == 0) {
            double ans = ((double) (green + blue) / bballs);
            System.out.println((int) (ans * 100));
        }
    }
}
