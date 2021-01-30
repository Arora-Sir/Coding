import java.util.Scanner;
import java.lang.Math;

public class Max_Numb_after_rem {
    public static void main(String[] args) {
        int ans = 0;
        int n = 1234;
        int i = 1;
        while (n / i > 0) {
            int temp = (n / (i * 10)) * i + (n % i);
            i *= 10;
            ans = Math.max(ans, temp);
        }
        System.out.println(ans);
        // 123 124 134 234

        // Scanner s = new Scanner(System.in);
        // int num = s.nextInt();

        // int numSave = num;
        // int mini = Integer.MAX_VALUE;
        // int newNum = 0, mul = 1;

        // while (num > 0) {
        // int temp = num % 10;
        // if (temp < mini)
        // mini = temp;
        // num /= 10;
        // }
        // while (numSave > 0) {
        // int temp = numSave % 10;
        // if (temp != mini) {
        // newNum += temp * mul;
        // mul *= 10;
        // }
        // numSave /= 10;
        // }
        // System.out.println(newNum);

    }
}
