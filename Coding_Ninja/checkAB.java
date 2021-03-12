import java.util.Scanner;

public class checkAB {
    public static boolean checkAB(String str) {
        if (str.length() == 0) {
            return true;
        }
        if (str.charAt(0) == 'a') {
            if (str.substring(1).length() > 1 && str.substring(1, 3).equals("bb")) {
                // 1 inclusive, 3 exclusive
                return checkAB(str.substring(3));
            } else {
                return checkAB(str.substring(1));
            }
        } else
            return false;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String input = s.next();
        System.out.println(checkAB(input));
    }

}