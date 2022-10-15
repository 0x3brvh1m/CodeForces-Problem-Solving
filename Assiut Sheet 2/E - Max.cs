using System;
namespace problems
{
    class Program
    {
       
        
        static void Main(string[] args)
        {

            int x = int.Parse(Console.ReadLine());
            var y = Console.ReadLine();
            var z = y.Split();
            int max = int.Parse(z[0]);
            for (int i = 0; i < x ; i++)
            {
                if (int.Parse(z[i]) > max)
                {
                    max = int.Parse(z[i]);
                }
                else
                {
                    continue;
                }
            }
            Console.WriteLine(max);


        }
    }
}
    

