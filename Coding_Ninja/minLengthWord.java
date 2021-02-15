/*Given a string S (that can contain multiple words), you need to find the word which has minimum length.
Note : If multiple words are of same length, then answer will be first minimum length word in the string.
Words are separated by single space only.
*/

import java.util.Scanner;

public class minLengthWord {

    public static String minLengthWrd(String input) {
        StringBuffer str = new StringBuffer();
        int subEnd = -1, subStart = 0, subLength = Integer.MAX_VALUE;
        for (int i = 0; i < input.length(); i++) {
            if (input.charAt(i) == ' ' || i == input.length() - 1) {
                if (i == input.length() - 1)
                    subEnd = i;
                else
                    subEnd = i - 1;
                if (subEnd - subStart < subLength) {
                    subLength = subEnd - subStart;
                    str.delete(0, str.length());
                    str.append(input.substring(subStart, subEnd + 1));
                }
                subStart = i + 1;
            }
        }
        return (str.toString());
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.nextLine();

        System.out.println(minLengthWrd(str));
    }
}
