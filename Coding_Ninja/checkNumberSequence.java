//Not well written. Check coding ninja saved if not remember -> by boolean

import java.util.*;
import java.lang.Math;

public class checkNumberSequence {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        boolean strictDec = false;
        int inc = 0, dec = 0;

        int n1 = s.nextInt();
        int n2 = s.nextInt();
        if (n1 < n2)
            inc++;
        if (n1 > n2)
            dec++;
        int n3save = 0;
        int i = 2;

        for (i = 2; i < n; i++) {

            int n3 = s.nextInt();
            n3save = n3;
            if (n2 > n1 && n3 < n2) {
                System.out.println("false");
                return;
            }
            if (n2 < n1 && n3 > n2) {
                break;
            }

            n1 = n2;
            n2 = n3;
            if (n1 < n2)
                inc++;
            if (n1 > n2)
                dec++;
            if (inc == n - 1 || dec == n - 1) {
                System.out.println("true");
                return;
            }

        }

        if (n2 < n1 && n3save > n2) {
            for (int j = i; j < n - 1; j++) {

                n1 = n2;
                n2 = n3save;
                n3save = s.nextInt();

                if (n3save < n2) {
                    System.out.println("false");
                    return;
                }
            }
        }
        System.out.println("true");
        return;

    }
}
