#include <stdio.h>

int LireNumber()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    return n;
}

int inverserEntier(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int c = n % 10;
        rev = rev * 10 + c;
        n = n / 10;
    }
    return rev;
}

void PrintRev()
{
    int n;
    int rev = inverserEntier(LireNumber());

    printf("Number rev : %d\n",rev);
}

int main()
{
    PrintRev();

    return 0;
}