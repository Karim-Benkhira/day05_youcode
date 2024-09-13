#include <stdio.h>

int LireUnNumber()
{
    int n;
    do
    {
        scanf("%d",&n);
        if (n <= 0) 
            printf("Veuillez entrer un nombre naturel positif.\n");
        
    } while(n < 0);
    return n;
}

int calculerFactorielle(int n)
{
    int F = 1;

    for(int i = 1;i <= n;i++)
    {
        F *= i;
    }

    return F;
}

int main()
{
    printf("Veuillez entrer un nombre naturel positif.\n");

    int n = LireUnNumber();
    int F = calculerFactorielle(n);
    printf("%d!: %d\n",n,F);

    return 0;
}