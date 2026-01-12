using System;
using System.Collections.Generic;

class Program
{
    static List<int> Fibonacci(int n)
    {
        if (n <= 0)
        {
            throw new ArgumentException("Number must be positive");
        }
        
        if (n == 1)
        {
            return new List<int> { 0 };
        }
        
        List<int> result = new List<int> { 0, 1 };
        
        for (int i = 2; i < n; i++)
        {
            result.Add(result[i - 1] + result[i - 2]);
        }
        
        return result;
    }

    static void Main()
    {
        try
        {
            Console.Write("Enter sequence length: ");
            int count = int.Parse(Console.ReadLine());
            
            List<int> sequence = Fibonacci(count);
            
            Console.Write("Fibonacci sequence: ");
            Console.WriteLine(string.Join(" ", sequence));
        }
        catch (Exception e)
        {
            Console.WriteLine($"Error: {e.Message}");
        }
    }
}