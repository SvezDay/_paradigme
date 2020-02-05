#include <stdio.h>

int pgcd1 (int m, int n)
{
  return (n==0)?(m):(pgcd1( n, m % n));
}

int pgcd3 (int m, int n)
{
  if (n != 0)
    return pgcd3( n, m % n);
}

int pgcd2(int a, int b)
{
  int r;
  while (b != 0)
    {
      r = a%b;
      a = b;
      b = r;
    }
  return a;
}


int main(void)
{
    int a, b;
    printf("Veuillez entrer le premier nombre :");
    scanf("%d", &a);

    printf("Veuillez entrer le second nombre :");
    scanf("%d", &b);

    int c = pgcd3(a, b);
    printf("le PGCD est %d", c);

    return 0;
}






