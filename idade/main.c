#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;
    printf("digite o primeiro nome ");
    gets(nome1);

    printf("digite a idade ");
    scanf("%d", &idade1);

    printf("digite o segundo nome ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);

    printf("digite a idade ");
    scanf("%d", &idade2);


    media= (idade1 + idade2) / 2.0;

    printf("A idade media de %s e %s e de %.1lf anos. ", nome1, nome2, media);


    return 0;
}
