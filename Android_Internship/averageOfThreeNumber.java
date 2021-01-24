import java.util.Scanner;

public class averageOfThreeNumber {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in); // ! S larger

        String name = s.next();
        char nameFirstChar = name.charAt(0); // ! name. first charAt -> A large

        int m1 = s.nextInt();
        int m2 = s.nextInt();
        int m3 = s.nextInt();

        int avg = (m1 + m2 + m3) / 3;

        System.out.println(nameFirstChar); // ! S
        System.out.println(avg);

    }

}
