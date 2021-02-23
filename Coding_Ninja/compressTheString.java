public class Solution {

    public static String getCompressedString(String str) {
        int n = str.length();
        String answer = "";
        if (n == 0)
            return answer;

        int currentCharCount = 1;
        answer += str.charAt(0);

        for (int i = 1; i < n; ++i) {
            if (str.charAt(i) == str.charAt(i - 1)) {
                ++currentCharCount;
            } else {
                if (currentCharCount > 1) {
                    answer += currentCharCount;
                    currentCharCount = 1;
                }
                answer += str.charAt(i);
            }
        }

        if (currentCharCount > 1)           // for last chracterCount
            answer += currentCharCount;

        return answer;
    }

}