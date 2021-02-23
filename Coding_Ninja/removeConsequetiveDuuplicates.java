// public class removeConsequetiveDuuplicates {

// }

public class Solution {

    public static String removeConsecutiveDuplicates(String str) {
        int n = str.length();

        if (n == 0) {
            return str;
        }

        String answer = "";
        char prevChar = 9999;
        for (int i = 0; i < n; i++) {
            char ch = str.charAt(i);
            if (prevChar != ch) {
                prevChar = ch;
                answer += ch;
            }
        }

        // int startIndex = 0;
        // while(startIndex < n) {
        // char uniqueChar = str.charAt(startIndex);
        // int nextUniqueCharIndex = startIndex + 1;

        // while (nextUniqueCharIndex < n && str.charAt(nextUniqueCharIndex) ==
        // uniqueChar) {
        // nextUniqueCharIndex += 1;
        // }

        // answer += uniqueChar;

        // startIndex = nextUniqueCharIndex;
        // }

        return answer;
    }

}