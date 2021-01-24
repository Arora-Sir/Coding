import java.util.Scanner;

public class HelloWorld {
    public static void main(String[] args) { // main + tab
        System.out.println("Hello"); // system think it of as a file you can code to out put whatever you are
                                     // printing
        // out - > output
        // print -> print the content

        System.out.print("Hello\n"); // syso + tab
        System.out.print("Hello");
        System.out.print("Hello\n");

        int a;
        a = 10;
        System.out.println(a); // create -> initialize -> then print use

        int isValid; // camel case
        boolean num = true; // only true or false
        System.out.println(num);

        int b;
        // ! Necessary thing -> Scanner
        Scanner s = new Scanner(System.in); // S capital + java.util.scanner added
        b = s.nextInt(); // take input from user (fetch the number)

        // if I enter string instead of int here, it'll give me error
        System.out.println(b);
        int c = s.nextInt(); // take input from user

        int d = b + c;
        System.out.println(d);

        String str = s.next();
        // it'll not print if I have spaces in between, If I want entire line then
        String stro = s.nextLine(); // for entire line (with spaces)

        // ? what about char?? Indirect root
        String st = s.next(); // first take line or a word
        char ch = st.charAt(0); // take input a single character which is at first

    }
}
