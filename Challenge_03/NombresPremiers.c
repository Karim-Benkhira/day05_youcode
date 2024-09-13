#include <stdio.h>
#include <stdbool.h>

int LireNumber()
{
    int n;
    printf("Enter Number n : ");
    scanf("%d",&n);
    return n;
}

bool CheakPremiers(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

void AffichagedesNombresPremiers(int n)
{
    for (int i = 2; i < n; i++)
    {
        if(CheakPremiers(i))
            printf("%d\n",i);
    }
    
}

int main()
{
    AffichagedesNombresPremiers(LireNumber());
    return 0;
}
