using System;

namespace ConsoleAppFormes
{

    class Program
    {
        static void Main(string[] args)
        {
            //public double ran = new Random().NextDouble();
            Console.WriteLine("Hello World!");
            Rectangle rec = new Rectangle();
            Console.WriteLine("color: ", rec.getColor());
            Console.WriteLine(rec);
        }
    }
        class Rectangle
    {
        private double largeur, longueur;
        private string color;

        public Rectangle(){
            largeur = Math.Round((new Random().NextDouble() * (100 - 1) + 1), 2);
            longueur = Math.Round((new Random().NextDouble() * (100 - 1) + 1), 2);
            color = "blue";
        }
        public Rectangle(double _largeur, double _longueur, string _color){

        }
        public string getColor(){
            Console.WriteLine(color);
            return color;
            
        }
        public override string ToString()
        {
            return "Color = " + color;
        }
        ~Rectangle(){
            largeur = 0;
            longueur = 0;
            color = null;
        }
    }
}
