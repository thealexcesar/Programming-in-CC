class Calculator {
    /**
     * Enter in command-line run.
     * @param args Asks number, operator, another number.
     * @return result.
     * @author alexcesarsilva
     */
    public static void println(String s) {
        System.out.println(s);
    }
    public static void main(String[] args) {
        double x = Double.parseDouble(args[0]);
        double y = Double.parseDouble(args[2]);

        // Using switch or if(args[1].equals("sum")).
        switch(args[1]) {
            case "add" : sum(x, y);
                break;
            case "minus" : diff(x, y);
                break;
            case "times" : mult(x, y);
                break;
            case "div" : 
                if (args[2].equals(0)) {
                    println("Division by zero is not available!");
                }
                else { 
                    div(x, y);
                }
                break;
            case "pow" : power(x, y);
                break;
            case "root" : root(x, y);
                break;
            default :  error();
            break;
        }
    }

    static void sum(double x, double y) {
        System.out.println(x + y);
    }

    static void diff(double x, double y) {
        System.out.println(x - y);
    }

    static void mult(double x, double y) {
        System.out.println(x * y);
    }

    static void div(double x, double y) {
        System.out.printf("\n\t%.2f\n", x / y);
    }

    static void power(double x, double y) {
        System.out.printf("\n\t%g\n", Math.pow(x, y));
    }
    static void root(double x, double y) {
        System.out.printf("\n\t%.0f\n", Math.sqrt(y));
    }

    static void error() {
        System.out.println("\n\tOops! Invalid operator.");
    }
}