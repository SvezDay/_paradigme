using System;

namespace Guess
{
    class Program
    {
        static void Main(string[] args)
        {
            int rand = new Random().Next() % 100;
            int proposal = -1;
            Console.WriteLine("Propose un nombre en 1 et 100");
            
            while(rand != proposal){
                try{
                    proposal = Convert.ToInt32(Console.ReadLine());

                     if(rand == proposal){
                        Console.WriteLine("You WIN !");
                    }else if(rand > proposal){
                        Console.WriteLine("Vise plus haut");
                    }else{
                        Console.WriteLine("Vise plus bas");
                    }

                }catch (FormatException e) {
                    Console.WriteLine("Propose un nombre en 1 et 100");
                }
               
            }
            
        }
    }
}
