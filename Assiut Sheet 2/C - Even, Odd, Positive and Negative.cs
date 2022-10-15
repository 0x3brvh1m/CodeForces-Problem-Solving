using System;
namespace problems
{
    class Program
    {
       
        
        static void Main(string[] args)
        {
            
            int x = int.Parse(Console.ReadLine());
            int even = 0, odd = 0, pos = 0, neg = 0;
            var a = Console.ReadLine();
            var y = a.Split();
            for(int i = 0; i < x; i++)
            {
                if (int.Parse(y[i]) > 0)
                {
                    pos += 1;
                }if(int.Parse(y[i]) == 0 || int.Parse(y[i]) %2 == 0)
                {
                    even += 1;
                }
                if (int.Parse(y[i]) < 0)
                {
                    neg += 1;
                }
                if (int.Parse(y[i]) % 2 != 0)
                {
                    odd += 1;
                }
            }
            Console.WriteLine("Even: {0}\nOdd: {1}\nPositive: {2}\nNegative: {3}",even,odd,pos,neg);
        }
    }
}
    

