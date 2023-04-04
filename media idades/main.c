#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 0A");
    int idade, soma, loop;
    double media;
    loop = 0;
    soma = 0;

    do
    {
        printf("digite a idade ");
        scanf("%d", &idade);
        if(idade > 0)
        {
            soma = soma + idade;
            loop = loop + 1;
        }
    }
    while(idade>0);
    if(loop == 0)
    {
        printf("IMPOSSIVEL CALCULAR ");
    }
    else
    {
        media = (double) soma / loop;
        printf("Media = %.2lf ", media);
        return 0;
    }
}
