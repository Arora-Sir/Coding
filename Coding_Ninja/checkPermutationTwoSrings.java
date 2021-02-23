import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class checkPermutationTwoSrings {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws NumberFormatException, IOException {
        String str1 = br.readLine();
        if (str1 != null) {
            str1 = str1.trim();
        } else {
            str1 = "";
        }

        String str2 = br.readLine();
        if (str2 != null) {
            str2 = str2.trim();
        } else {
            str2 = "";
        }

        boolean ans = Solution.isPermutation(str1, str2);

        System.out.println(ans);

    }

}

class Solution{
    
    public static boolean isPermutation(String str1, String str2) {
        if (str1.length() != str2.length())
            return false;

        int frequency[] = new int[256];

        for (int i = 0; i < 256; i++)
            frequency[i] = 0;

        for (int i = 0; i < str1.length(); i++)
            frequency[str1.charAt(i)]++;

        for (int i = 0; i < str2.length(); i++)
            frequency[str2.charAt(i)]--;

        for (int i = 0; i < 256; i++)
            if (frequency[i] != 0)
                return false;

        return true;
    }

}