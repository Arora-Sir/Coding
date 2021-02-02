import java.io.IOException;

public class numberFormatException {
    public static void main(String[] args) throws NumberFormatException, IOException {
        int s = Integer.parseInt("g", 29);
        System.out.println(s);

        int ss = Integer.parseInt("G", 27);
        System.out.println(ss);

        int sss = Integer.parseInt("GEE", 27);
        System.out.println(sss);

        int ssss = Integer.parseInt("GEE", 29);
        System.out.println(ssss);

        int x = Integer.parseInt("5555555", 10);
        System.out.println(x);

        int zz = Integer.parseInt("10101", 2);
        System.out.println(zz);

    }
}