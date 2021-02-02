import java.util.Scanner;

public class FarenheitToCelci {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        int S = s.nextInt();
        int E = s.nextInt();
        int W = s.nextInt();

        double C;
        int c;
        while (S <= E) {
            C = (S - 32) * (5.0 / 9);
            c = (int) C;
            System.out.println(S + "\t" + c);
            S += W;
        }
    }

}
