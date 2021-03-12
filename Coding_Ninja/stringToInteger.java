import java.util.Scanner;

public class stringToInteger {
    public static int convertStringToInt(String input) {
        if (input.length() == 0)
            return 0;
        int frontSum = convertStringToInt(input.substring(0, input.length() - 1));
        return frontSum * 10 + input.charAt(input.length() - 1) - '0';
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String input = s.nextLine();
        System.out.println(convertStringToInt(input));
    }
}
