using System;
public class funcexer9
{
    public static void Main()
    {
        
        var n = Console.ReadLine();
        var y = n.ToCharArray();
        var z = n.ToCharArray();
        Array.Reverse(z);
        var arr1 = new string(y);
        var arr2 = new string(z);
        if (int.Parse(arr1) == int.Parse(arr2))
        {
            Console.WriteLine("{0}\nYES", int.Parse(arr2));
        }
        else {
            Console.WriteLine("{0}\nNO",int.Parse(arr2));
        }
    }
}
