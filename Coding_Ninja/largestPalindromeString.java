import java.util.Scanner;

public class largestPalindromeString {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String input = s.next();
        int k = s.nextInt();
        System.out.println(maximumPalindromeUsingKChanges(input, k));
        s.close();
    }

    static String maximumPalindromeUsingKChanges(String input, int k) {
        char palindrome[] = input.toCharArray();
        int start = 0;
        int end = input.length() - 1;

        while (start < end) { // Try to make String palindrome
            if (input.charAt(start) != input.charAt(end)) {
                palindrome[start] = palindrome[end] = (char) Math.max(input.charAt(start), input.charAt(end));
                k--;
            }
            start++; end--;
        }

        if (k < 0) return "NOT POSSIBLE";
        start = 0;
        end = input.length() - 1;

        while (start <= end) {
            if (start == end) {
                if (k > 0) {
                    palindrome[start] = '9';
                }
            }

            if (palindrome[start] < '9') {
                if (k >= 2 && palindrome[start] == input.charAt(start) && palindrome[end] == input.charAt(end)) {
                    k -= 2;
                    palindrome[start] = palindrome[end] = '9';
                }
                else if (k >= 1 && (palindrome[start] != input.charAt(start) || palindrome[end] != input.charAt(end))) {
                    k--;
                    palindrome[start] = palindrome[end] = '9';
                }
            }
            start++; end--;
        }

        String ans = "";
        for (int i = 0; i < palindrome.length; i++)
            ans += palindrome[i];
        return ans;
    }

}