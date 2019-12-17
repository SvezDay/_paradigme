using System;

namespace Tableaux
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            MyArray arr = new MyArray();
            arr.callToAction();
            arr.affichage();
            arr.tri();
            arr.affichage();
            arr.triInverse();
            arr.affichage();
            
            //Console.WriteLine("Finish");
        }
    }
    class MyArray {
        // Initialisation d'un tableau de 5 int
        private int[] arr = new int[5];

        public MyArray(){}

        // Méthode de call to action de remplissage du tableau avec gestion des exceptiosn
        public void callToAction(){
            bool b = false;
            while(!b){
                Console.WriteLine("Inscrivez une liste de 5 nombres de 1 à 100!");
                try{
                    String[] str = Console.ReadLine().Split();
                    for(int i = 0; i < arr.Length; i++ ){
                        arr[i] = int.Parse(str[i]);
                    }
                    if(arr[4] != 0){ b = true; }
                }catch(FormatException e){
                    Console.WriteLine(e);
                    Console.WriteLine("Assurez-vous que la liste comporte 5 nombres de 1 à 100");
                }
            }
            
        }

        // methode de tri
        public void tri(){
            Array.Sort(arr);
            
        }

        // methode de tri inversé
        public void triInverse(){
            Array.Reverse(arr);
        }

        // methode d'affichage
        public void affichage(){
            for(int i = 0; i < arr.Length; i++){
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine(" /");
        }
    
    }
}
