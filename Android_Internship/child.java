class parent {
    void marry() {
        System.out.println("parent");
    }
}

class child extends parent {
    void marry() {
        System.out.println("child");
    }

    public static void main(String[] args) {
        parent p1 = new child();
        p1.marry();
    }
}
