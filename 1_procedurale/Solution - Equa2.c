#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, delta;

    printf("Equations du second degre !!! \n\n\n");
    printf("\n****************************\n");
    printf("Resolution d'une equation du type ax^2 + bx + c = 0 \n\n");

    printf("Veuillez entrer les coefficients  a, b et c (separes par un espace) \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = pow(b,2) - ( 4 * a * c);

    if (delta < 0)
    {
        printf("pas de solution\n");
    }
    else if (delta == 0)
    {
        printf("une solution unique : %lf\n", -b/(2 * a));
    }
    else
    {
        printf("il y a 2 racines à cette équation : %lf et %lf\n",
            (-b - sqrt(delta)) / (2*a), (-b + sqrt(delta)) / (2*a));
    }

    return 0;
}
