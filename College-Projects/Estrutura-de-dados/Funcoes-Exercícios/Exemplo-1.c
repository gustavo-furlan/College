#include <stdio.h>
#include <locale.h>

int imparPar(int x)
{
    setlocale(LC_ALL, "");
    if (x % 2 == 1)
    {
        printf("%i � �mpar",x);
    }
    else
    {
        printf("%i � par", x);
    }
    printf("\n\n");
}

main()
{
    setlocale(LC_ALL, "");
    int a, i;
    printf("Digite 10 n�meros: \n");
    for (i=1;i<=10;i++)
    {
        printf("Digite o n�mero %i: \n", i);
        scanf("%i", &a);
        imparPar(a);
    }
}