import java.util.Random;

class RandomN {
    public static void main(String[] args) {
        Random generate = new Random();

        for(int i = 0; i < 22; i++) {
            int number = generate.nextInt(22);
            System.out.println(number);
        }
    }
}