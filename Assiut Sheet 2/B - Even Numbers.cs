using System;
namespace problems
{
    class Program
    {
       
        
        static void Main(string[] args)
        {
            int a = 0;
            int x = int.Parse(Console.ReadLine());
            for (int i = 1; i <= x; i++)
            {
                if (i % 2 == 0)
                {
                    a += 1;
                    Console.WriteLine(i);
                }
            }
            if (a == 0)
            {
                Console.WriteLine(-1);
            }
        }
    }
}
    

