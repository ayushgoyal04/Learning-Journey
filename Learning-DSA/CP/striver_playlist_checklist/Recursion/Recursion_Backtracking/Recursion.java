public class Recursion {
    public static void main(String[] args) {
       // System.out.println(fact(5));
       printRev(5);
       System.out.println(power(5));
        
    }
    public static int fact(int n){

        if(n==1) return n;

        int f = fact(n-1);
        return n*f;
    }
    public static void printRev(int n){
        
        if (n==0){
            return;
        }
        System.out.println(n);
        printRev(n-1);
        
    }

    public static int power(int p){
        if(p==0) {
            return p+1;
        }

        int pow = power(p-1);
        return 2*pow;

    }
    
}
