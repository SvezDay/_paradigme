#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char morp[10][10];


void AfficherDamier()
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c ", morp[i][j]);
        }
        printf("\n");
    }

    getchar();
}

int checkMove(int x1, int y1, int x2, int y2)
{
    static int nbcoups;

    // vérificatin des bornes
    if ((x1 < 0) || (x1 > 9) || (y1 < 0) || (y1 > 9) ||(x2 < 0) || (x2 > 9) || (y2 < 0) || (y2 > 9))
    {
        return 0;
    }
    // y a t il une pièce dans la case de départ ?
    char piece = morp[x1][y1];
    if ((piece != 'o') && (piece != 'x'))
    {
        return 0;
    }

    if ((piece == 'o') && (nbcoups % 2 == 0))
    {
        return 0;
    }
    if ((piece == 'x') && (nbcoups % 2 == 1))
    {
        return 0;
    }

    // la case d'arrivée est elle une case noire ?
    if (morp[x2][y2] != 'N')
    {
        return 0;
    }
    // où va t elle ???
    if (piece == 'x')
    {
        if ((x2 != x1 - 1) || ((y2 != y1 - 1) && (y2 != y1 + 1)))
        {
            return 0;
        }
    }
    if (piece == 'o')
    {
        if ((x2 != x1 + 1) || ((y2 != y1 - 1) && (y2 != y1 + 1)))
        {
            return 0;
        }
    }

    nbcoups++;

    return 1;
}

int move(int x1, int y1, int x2, int y2)
{
    int res = checkMove(x1, y1, x2, y2);
    if (res == 0)
    {
        printf("coup invalide !!! \n\n");
        return 1;
    }

    char tmp = morp[x1][y1];
    morp[x1][y1] = 'N';
    morp[x2][y2] = tmp;

    AfficherDamier();

    return 1;
}

void init()
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ((i + j ) %2 == 0)
            {
                morp[i][j] = 'B';
            }
            else
            {
                if (i < 4)
                {
                    morp[i][j] = 'o';
                }
                else
                if (i > 5)
                {
                    morp[i][j] = 'x';
                }
                else
                {
                    morp[i][j] = 'N';
                }
            }
        }
    }

    AfficherDamier();
}

int main()
{
    init();
    int x1, y1, x2, y2;
    char cc;
    do
    {
        printf("\nveuillez entrer x1 :");
        scanf("%d", &x1);

        printf("\nveuillez entrer y1 :");
        scanf("%d", &y1);

        printf("\nveuillez entrer x2 :");
        scanf("%d", &x2);

        printf("\nveuillez entrer y2 :");
        scanf("%d", &y2);

        move(x1, y1, x2, y2);

        printf("\n\n\nVoulez vous continuer ?? (o/n)");
        scanf(" %c", &cc);
    }
    while(cc == 'o');

    return 0;
}
