public class ZIO2020Q2 {
    public static void main(String[] args) {
        int TC[] = {9,58,2000}; // Test Case Array
        for(int cases=0;cases<TC.length;cases++) {
            System.out.println(TC[cases]+": "+Solfunc2020Q2(TC[cases])); // Printing the Value of Respective Test Cases
        }
    }

    private static final int Solfunc2020Q2(int S) {
        int total = 0;
        int m = 1;
        int n = 1;
        while(true) {
            if(m+n<S) {
                m*=2; 
                total++;
            }
            if(m+n<S) {
                n*=2; 
                total++;
            }
            if(m+n==S)
                return total;
            if(m+n>S)
                return total-1;
        }
    }
}
