using System;

namespace C_ {
    class Reverse {
        static void Main(string[] args) {
            int reverse;
            Console.Write("Enter your number: ");
            var number = int.Parse(Console.ReadLine());
            do {
                reverse = number % 10;
                Console.Write(reverse);
                number /= 10;
            }
             while (number != 0);
             
            Console.WriteLine();
        }
    }
}