class ZIO2020Q1 {
    public static void main(String args[]) {
        int TC[] = {4,10,23}; // Test Case Array
        for(int cases=0;cases<TC.length;cases++) {
            System.out.println(TC[cases]+": "+Solfunc2020Q1(TC[cases])); // Printing the Value of Respective Test Cases
        }
    }

    public static final int Solfunc2020Q1(int S) { //After Working out the Equation, the following Program was Constructed
        return ((2*S)*(S+1))+1; //Equation
    }
}