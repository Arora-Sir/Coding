class co {
    co() {
        System.out.println("Hello");
    }
}

class Test extends co {
    Test() {
        System.out.println("hi");
    }

    public static void main(String[] args) {
        Test t = new Test();
    }

}
