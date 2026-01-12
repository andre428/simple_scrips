using System;

class Person
{
    public string Name { get; set; }
    public string Surname { get; set; }
    public int Age { get; set; }

    public Person(string name, string surname, int age)
    {
        Name = name;
        Surname = surname;
        Age = age;
    }

    public string MyBasicInfo()
    {
        return $"My name is {Name} {Surname} and I am {Age} years old.";
    }
}

class Program
{
    static void Main()
    {
        Person person = new Person("Marek", "Zegarek", 33);
        Console.WriteLine(person.MyBasicInfo());
    }
}