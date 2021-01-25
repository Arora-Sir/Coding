abstract class demo {
    abstract void m1();

    // abstract void m2();
    void m2() {
        System.out.println("hiiiiii");
    }
}

public class absclass extends demo {
    void m1() {
        System.out.println("hello");
    }

    // void m2() {
    // System.out.println("hey");
    // }

    public static void main(String[] args) {
        // demo d = new demo(); // no object -> no address -> extend kraake use krr skte
        // hien
        absclass t = new absclass();
        t.m1();
        t.m2();
    }
}
