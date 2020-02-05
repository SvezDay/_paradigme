// Déterminer le PGCD de 2 nombres par l'algorithme d'Euclide
// CMD:  gcc Euclide.c -o euclide -lm && ./euclide

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eucli(int b, int c){
    // Calcul
    int r = b % c;
    // Test si 0 retourner l'avant dernier reste r, sinon récurtion
    if(r == 0){
        return c;
    }else{
        return eucli(c, r);
    }



}

int main(){
    int a, b;
    // Demander des paramètre
    printf("Donner les deux nombres séparés par un espace ! \n");
    scanf("%d %d", &a, &b);

    // si a n'est pas > b, on inverti les nombres
    if(a <= b){
        a = a + b;
        b = a - b;
        a = a - b;
    }

    // appeler la fonction euclide avec les parametres précédents
    int pgcd = eucli(a, b);
    printf("Le PGCD est %d : ", pgcd);
    return 0;
}


