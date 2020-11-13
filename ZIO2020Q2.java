public class ZIO2020Q2 {
    public static void main(String[] args) {
        System.out.println(Solfunc2020Q2(8));
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
