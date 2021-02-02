import java.util.Scanner;

public class Total_Salary {

    public static void main(String[] args) {
        // Write your code here
        Scanner s = new Scanner(System.in);
        int basic = s.nextInt();

        String ch = s.next();
        int grade = ch.charAt(0);
        // or directly
        // int grade = s.next().charAt(0);

        int allow;
        double hra, da, pf, ts;
        hra = 0.20 * basic;
        da = 0.50 * basic;
        pf = 0.11 * basic;

        if (grade == 'A')
            allow = 1700;
        else if (grade == 'B')
            allow = 1500;
        else
            allow = 1300;

        ts = (basic + hra + da + allow - pf);
        if (ts % 1 >= 0.5)
            System.out.println((int) ts + 1);
        else
            System.out.println((int) ts);

    }
}
