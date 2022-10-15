using System;
namespace problems
{
    class Program
    {
       
        
        static void Main(string[] args)
        {

            int x = int.Parse(Console.ReadLine());
            long fac;
            for(int i = 0; i < x; i++)
            {
                int y = int.Parse(Console.ReadLine());
                fac = 1;
                for(int j = 2; j <= y; j++)
                {
                    
                    fac *= j;
                }
                Console.WriteLine(fac);
            }
            


        }
    }
}
    

