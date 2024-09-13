#include <stdio.h>

void TabledeMultiplicationInversée()
{
    int Number;

    printf("Entrez un nombre: ");
    scanf("%d",&Number);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d * %d = %d\n",Number,i,Number * i);
    }
}

int main()
{
    TabledeMultiplicationInversée();

    return 0;
}