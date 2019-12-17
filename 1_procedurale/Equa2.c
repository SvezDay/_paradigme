// Ecrire un programme qui calcule les racines d’un polynôme du second degré
// CMD: gcc Equa2.c -o equa2 -lm (pour sqrt dans la lib math )


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void poly(int a, int b, int c){
    
    float delta = (b * b) - 4*a*c;
    double racine1 = 0;
    double racine2 = 0;
    printf("check delta: %fl", delta);

    if(delta >0){
        double da = a;
        double rs = sqrt(da);
        racine1 = (-b + rs) / (2*a);
        racine1 = (-b - rs) / (2*a);
        printf("Il y a 2 racines : \n");
        printf("La racine 1 est : %4.2f \n", racine1);
        printf("La racine 2 est : %4.2f \n", racine2);
    }else if(delta == 0){
        racine1 = (-b)/2*a;
        printf("Il y a 1 racine : \n");
        printf("La racine est : %4.2f \n", racine1);
    }else{
        printf("Il n'y a pas racines \n");
    }

}

int main(){
    // Définir un polynome

    // lancer la fonction poly
    poly(4, 13, 7);

}