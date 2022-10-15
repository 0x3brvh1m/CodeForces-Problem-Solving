using System;
namespace problems
{
    class Program
    {
       
        
        static void Main(string[] args)
        {

            int x = int.Parse(Console.ReadLine());
            for(int i = 1; i<=12; i++)
            {
                Console.WriteLine("{0} * {1} = {2}",x,i,x*i);
            }


        }
    }
}
    

