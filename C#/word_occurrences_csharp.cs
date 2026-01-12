using System;
using System.Collections.Generic;

class Program
{
    static int CountWords(string text)
    {
        return text.ToLower().Split(new char[] { ' ', '\t', '\n' }, 
                                     StringSplitOptions.RemoveEmptyEntries).Length;
    }

    static Dictionary<string, int> CountWordOccurrences(string text)
    {
        text = text.ToLower();
        string[] words = text.Split(new char[] { ' ', '\t', '\n' }, 
                                     StringSplitOptions.RemoveEmptyEntries);
        
        Dictionary<string, int> wordCount = new Dictionary<string, int>();
        
        foreach (string word in words)
        {
            if (wordCount.ContainsKey(word))
            {
                wordCount[word]++;
            }
            else
            {
                wordCount[word] = 1;
            }
        }
        
        return wordCount;
    }

    static void Main()
    {
        Console.Write("Enter text: ");
        string text = Console.ReadLine();
        
        Console.WriteLine($"Total words: {CountWords(text)}");
        
        Dictionary<string, int> occurrences = CountWordOccurrences(text);
        
        Console.WriteLine("Word occurrences:");
        foreach (var pair in occurrences)
        {
            Console.WriteLine($"{pair.Key}: {pair.Value}");
        }
    }
}