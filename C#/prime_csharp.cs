using System;

class Program
{
    static string IsPrime(int number)
    {
        if (number < 2)
        {
            return $"{number} is out of range";
        }

        int maxRange = number / 2 + 1;
        for (int i = 2; i < maxRange; i++)
        {
            if (number % i == 0)
            {
                return $"{number} is not a prime number";
            }
        }
        return $"Yes, {number} is a prime number";
    }

    static void Main()
    {
        Console.Write("Enter a number: ");
        int num = int.Parse(Console.ReadLine());
        Console.WriteLine(IsPrime(num));
    }
}