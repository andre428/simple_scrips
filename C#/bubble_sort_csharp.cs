using System;

class Program
{
    static void BubbleSort(int[] array)
    {
        int n = array.Length;
        while (n > 1)
        {
            int newN = 0;
            for (int i = 1; i < n; i++)
            {
                if (array[i - 1] > array[i])
                {
                    int temp = array[i - 1];
                    array[i - 1] = array[i];
                    array[i] = temp;
                    newN = i;
                }
            }
            n = newN;
        }
    }

    static void Main()
    {
        try
        {
            Console.Write("Enter list length: ");
            int listLen = int.Parse(Console.ReadLine());
            
            if (listLen <= 0)
            {
                Console.WriteLine("List length must be greater than zero");
                return;
            }
            
            int[] bubbleList = new int[listLen];
            Random random = new Random();
            
            Console.Write("List to sort: ");
            for (int i = 0; i < listLen; i++)
            {
                bubbleList[i] = random.Next(1, 334);
                Console.Write($"{bubbleList[i]} ");
            }
            Console.WriteLine();
            
            Console.WriteLine("--------------------");
            BubbleSort(bubbleList);
            
            Console.Write("Sorted list: ");
            foreach (int num in bubbleList)
            {
                Console.Write($"{num} ");
            }
            Console.WriteLine();
        }
        catch (Exception e)
        {
            Console.WriteLine($"Error: {e.Message}");
        }
    }
}