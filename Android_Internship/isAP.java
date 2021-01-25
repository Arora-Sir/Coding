import java.util.Scanner;

public class isAP {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        int firstNum = s.nextInt();
        int secondNum = s.nextInt();
        int diff = firstNum - secondNum;
        boolean isAP = true;

        for (int i = 0; i < n - 2; i++) {
            int thirdNum = s.nextInt();
            if ((thirdNum - secondNum) != diff) {
                isAP = false;
                // break;
            }
            secondNum = thirdNum;
        }
        if (isAP)
            System.out.println("true");
        else
            System.out.println("false");
    }
}
