using System;

class URI
{

    static void Main(string[] args)
    {

        double raio = Convert.ToDouble(Console.ReadLine());

        double pi = 3.14159;

        double area = Math.Pow(raio, 2) * pi;

        Console.WriteLine($"A={area:F4}");
    }
}