using System;

namespace Polymorphisme
{
    class Form{
        public virtual double surface(){
            return 0;
        }
    }
    class Carre : Form {
        private double cote;
        public Carre(double cote){
            this.cote = cote;
        }
        public override double surface(){
            return Math.Pow(cote, 2);
        }
    }
    class Cercle : Form {
        private double rayon;
        public Cercle(double rayon){
            this.rayon = rayon;
        }
        public override double surface(){
            return Math.PI * Math.Pow(rayon, 2);
        }
    }
    class Caller {
        public void CallArea(Form f){
            double surf;
            surf = f.surface();
            Console.WriteLine("Surface: {0}", surf);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Caller cal = new Caller();
            Carre car = new Carre(3.05);
            Cercle cer = new Cercle(3.05);

            cal.CallArea(car);
            cal.CallArea(cer);
            Console.ReadKey();
        }
    }
}
