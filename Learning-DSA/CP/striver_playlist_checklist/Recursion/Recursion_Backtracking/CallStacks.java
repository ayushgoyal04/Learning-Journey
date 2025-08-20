public class CallStacks {
    public static void main(String[] args) {
        A();
    }

    public static void A() {
        B();
        System.out.println("Inside function A");
    }

    public static void B() {
        System.out.println("Inside function B");
        C();
    }

    public static void C() {
        D();
        System.out.println("Inside function C");
    }

    public static void D() {
        System.out.println("Inside function D");
    }
}
