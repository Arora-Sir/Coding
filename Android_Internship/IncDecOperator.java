class IncDecOperator {

    public static void main(String[] arora) {
        int a = 1, b = 2;
        System.out.println(a++ + --b); // line 1
        System.out.println(a-- + ++b); // line 2
        System.out.println(a++ - ++b); // line 3
        System.out.println(a++++ + b); // line 4

        // line 2 and 4 error
        // as - & -- same precedence
        // lly + & ++ same precedence
    }
}
