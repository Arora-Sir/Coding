public class Solution {

    public static char highestOccuringChar(String str) {
        int n = str.length();
        int frequency[] = new int[256];
        int maxFrequency = 0;

        for (int i = 0; i < n; i++) {
            frequency[str.charAt(i)]++;
            maxFrequency = Math.max(maxFrequency, frequency[str.charAt(i)]);
        }

        char answer = '\0';

        for (int i = 0; i < n; i++) {
            if (frequency[str.charAt(i)] == maxFrequency) {
                answer = str.charAt(i);
                break;
            }
        }

        return answer;
    }

}