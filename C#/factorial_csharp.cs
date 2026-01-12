using System;

class Program
{
    static long Factorial(int number)
    {
        if (number <= 1)
        {
            return 1;
        }
        return number * Factorial(number - 1);
    }

    static void Main()
    {
        Console.Write("Enter a number: ");
        int num = int.Parse(Console.ReadLine());
        Console.WriteLine($"Factorial of {num} is {Factorial(num)}");
    }
}