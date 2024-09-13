#include <stdio.h>

int LireUnNumber()
{
    int n;
    do
    {
        scanf("%d",&n);
        if (n <= 0) 
            printf("Veuillez entrer un nombre naturel positif.\n");
        
    } while(n <= 0);
    return n;
}

int calculerSomme(int N)
{
    int some = 0;

    for(int i = 1;i <= N;i++)
    {
        some  = i + some;
    }
    return some;
}

int main()
{
    printf("Veuillez entrer un nombre naturel positif.\n");

    int n = calculerSomme(LireUnNumber());
    printf("La somme des premiers nombres naturels est: %d\n",n);
}

