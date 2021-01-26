import java.util.Scanner;

public class cons {

    cons() {
        this(2, 3, 4);
        System.out.println("hi");
    }

    cons(int a, int b) {
        int c = a + b;
        System.out.println(c);
    }

    cons(int a, int b, int c) {
        this(23, 5);
        int d = a * c;
        System.out.println(d);
    }

    public static void main(String[] args) {
        cons t = new cons();
        // t.m2();
    }
}
