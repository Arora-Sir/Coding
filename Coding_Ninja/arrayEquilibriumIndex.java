import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class arrayEquilibriumIndex {

    public static int arrayEquilibriumIndex(int[] arr) {
        // Your code goes here
        int n = arr.length;
        int leftSum = 0, rightSum = 0;

        for (int j = 0; j < n; j++)
            rightSum += arr[j];

        for (int i = 0; i < n; i++) {

            rightSum -= arr[i];

            if (leftSum == rightSum)
                return i;

            leftSum += arr[i];
            // if(i!=n-1) rightSum -= arr[i+1];
            // else rightSum =0;

            // if(i==n-1){
            // if (leftSum == rightSum)
            // return i;
            // }
        }

        return -1;
    }

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static int[] takeInput() throws IOException {
        int size = Integer.parseInt(br.readLine().trim());
        int[] input = new int[size];

        if (size == 0) {
            return input;
        }

        String[] strNums;
        strNums = br.readLine().split("\\s");

        for (int i = 0; i < size; ++i) {
            input[i] = Integer.parseInt(strNums[i]);
        }

        return input;
    }

    public static void printArray(int[] arr) {
        for (int element : arr) {
            System.out.print(element + " ");
        }

        System.out.println();
    }

    public static void main(String[] args) throws NumberFormatException, IOException {
        int t = Integer.parseInt(br.readLine().trim());

        while (t > 0) {

            int[] arr = takeInput();
            System.out.println(arrayEquilibriumIndex(arr));

            t -= 1;
        }
    }
}