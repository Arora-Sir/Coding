import java.util.Scanner;

public class checkPalidromeReecursion {

    public static boolean isStringPalindrome(String input) {
        int len = input.length();
        if (len == 1)
            return true;
        if (input.charAt(0) == input.charAt(len - 1)) {
            return isStringPalindrome(input.substring(1, len - 1));
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String input = s.nextLine();
        System.out.println(isStringPalindrome(input));
    }
}
