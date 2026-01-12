using System;
using System.Linq;

class Program
{
    static int BiggestNum(int[] nums)
    {
        if (nums.Length == 0)
        {
            throw new ArgumentException("List cannot be empty");
        }
        
        int biggest = nums[0];
        foreach (int num in nums)
        {
            if (num > biggest)
            {
                biggest = num;
            }
        }
        return biggest;
    }

    static void Main()
    {
        try
        {
            Console.Write("Enter numbers separated by spaces: ");
            string input = Console.ReadLine();
            
            int[] numbers = input.Split(' ')
                                 .Select(int.Parse)
                                 .ToArray();
            
            int result = BiggestNum(numbers);
            Console.WriteLine($"Biggest number: {result}");
        }
        catch (Exception e)
        {
            Console.WriteLine($"Error: {e.Message}");
        }
    }
}