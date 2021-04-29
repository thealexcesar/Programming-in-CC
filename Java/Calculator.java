class Calculator {
    /**
     * Enter in command-line run.
     * @param args Asks number, operator, another number.
     * @return result.
     */
    public static void main(String[] args) {
        float x = Float.parseFloat(args[0]);
        float y = Float.parseFloat(args[2]);

        // if(args[0].equals("sum")) or switch:
        switch(args[1]) {
            case "add" : sum(x, y);
                break;
            case "minus" : diff(x, y);
                break;
            case "times" : mult(x, y);
                break;
            case "divided" : div(x, y);
                break;
            default :  error();
            break;
        }
    }

    static void sum(float x, float y) {
        System.out.println(x + y);
    }

    static void diff(float x, float y) {
        System.out.println(x - y);
    }

    static void mult(float x, float y) {
        System.out.println(x * y);
    }

    static void div(float x, float y) {
        System.out.printf("%.2f\n", x / y);
    }

    static void error() {
        System.out.println("Oops! Invalid operator.");
    }
}