import java.util.Scanner;

public class Probability {

    public static int factorial(int x) {
        int ans = 1;
        for (int i = 1; i <= x; i++)
            ans = ans * i;
        return ans;
    }

    public static double nCr(int n, int r) {
        int nfac = factorial(n);
        int rfac = factorial(r);
        int nrfac = factorial(n - r);
        double result = (double) nfac / (double) (rfac * nrfac);
        return result;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int x = s.nextInt();

        double ans = (double) nCr(4, x) * (double) nCr(4, n - x) * 100 / (double) nCr(8, n);
        System.out.println((int) ans);
        s.close();
        // int xx = x;

        // int balls = 8, red = 4, blue = 2, green = 2;
        // int bballs = balls;

        // double answer = 1.0;
        // if (x > n || n > 8 || x > 4) {
        // System.out.println("0");
        // return;
        // }

        // if (x != 0) {
        // for (int i = 0; i < n; i++) {
        // if (balls == 0)
        // break;
        // if (x > 0) {
        // answer *= ((double) red / balls);
        // red--;
        // x--;
        // } else {
        // answer *= ((double) 1.0);
        // }

        // balls--;
        // }
        // System.out.println((int) (answer * 100));
        // }

        // if (xx == 0) {
        // double ans = ((double) (green + blue) / bballs);
        // System.out.println((int) (ans * 100));
        // }
    }
}
