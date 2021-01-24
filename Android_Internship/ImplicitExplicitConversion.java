public class ImplicitExplicitConversion {

    public static void main(String[] args) {

        // ! Implicit conversion -> char to int i.e 2 bytes to 4 bytes
        char c = 'a';
        // or (int b = c + 10) here
        System.out.println(c + 10);

        // ! Explicit conversion -> int to char i.e 4 bytes to 2 bytes
        int i = c;
        // c = i; //error here so we have to do explicit conversion
        // ? there can be data loss

        c = (char) i;
        // c = c +1 even this will give error as going from char to int, so need conve.
        System.out.println(c);

        int j = (int) 10.5;
        // ! float f = 10.7; Even this gives error all data types are double by default

        // ? so either pass it explicitly or -> (float f = 10.7f;)
        float f = 10.7f;
        System.out.println(f);

    }
}
