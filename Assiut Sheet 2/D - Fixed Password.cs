using System;
namespace problems
{
    class Program
    {
       
        
        static void Main(string[] args)
        {
            
            for(int i = 0; true ; i++)
            {
                long x = long.Parse(Console.ReadLine());
                if (x == 1999)
                {
                    Console.WriteLine("Correct");
                    break;
                }
                else
                {
                    Console.WriteLine("Wrong");
                    continue;
                }

            }


        }
    }
}
    

