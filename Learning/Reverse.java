import java.util.Scanner;

public class Reverse {
/**
 * @param reverse 
 * @return right to left
 */
    public static void Main(String[] args) {
        int number, revert;
        Scanner input = new Scanner(System.in);

        System.out.println("Enter your number");
        number = input.nextInt();
        do {
            revert = number % 10;
            System.out.println(revert);
            number /= 10;
        }
        while (number != 0);
    }
}