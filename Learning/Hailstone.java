import java.util.Scanner;
/**
 * Compute a Hailstone sequence, if even = n/2, else = 3n+1.
 * @param n Starting number for sequence. Assumes n > 0.
 * @return Hailstone sequence starting with n and ending with 1.
 */
public class Hailstone {
    public static void main(String[] args) {
        System.out.print("Type a number: ");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        while (n > 1)
        {
            System.out.print(n);
            if (n % 2 == 0)
                n /= 2;
            else
                n = n * 3 + 1;
        }
        System.out.println(n);
    } 
}