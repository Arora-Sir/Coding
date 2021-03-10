import java.util.Scanner;

public class firstIndexOfNumberInArray {

    static Scanner s = new Scanner(System.in);

    public static int firstIndex1(int[] arr, int x, int index) {
        if (arr.length - index <= 0)
            return -1;
        if (arr[index] == x)
            return index;
        return firstIndex1(arr, x, index + 1);
    }

    public static int firstIndex(int input[], int x) {
        return firstIndex1(input, x, 0);
    }

    public static int[] takeInput() {
        int size = s.nextInt();
        int[] input = new int[size];
        for (int i = 0; i < size; i++) {
            input[i] = s.nextInt();
        }
        return input;
    }

    public static void main(String[] args) {
        int[] input = takeInput();
        int x = s.nextInt();
        System.out.println(firstIndex(input, x));
    }
}