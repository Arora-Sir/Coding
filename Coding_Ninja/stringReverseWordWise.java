public class Solution {

    public static String reverseWordWise(String input) {
        // int end = input.length();
        // int i = input.length() - 1;
        // String output = "";
        // while (i >= 0) {
        // if (input.charAt(i) == ' ') {
        // output = output + input.substring(i + 1, end) + " ";
        // end = i;
        // }
        // i--;
        // }
        // output += input.substring(i + 1, end);
        // return output;
        // }

        String ans = "";
        int start = 0, end = 0, i = 0;
        for (; i < input.length(); i++) {
            if (input.charAt(i) == ' ') {
                end = i;
                ans = " " + input.substring(start, end) + ans;
                start = i + 1;
            }
        }
        end = i;
        ans = input.substring(start, end) + ans;
        return ans;
    }
}