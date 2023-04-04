#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 0F");
    int N;
    double soma, media;

    printf("digite o numero de pessoas.");
    scanf("%d", &N);

    int idade[N], nmenores, x;
    double alt[N];
    char nome[N][50];

    for (int i = 0; i < N; i++)
    {
        printf("digite os dados da" " %d " "pessoa: \n", i + 1);
        printf("Digite o nome:");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Digite a idade:");
        scanf("%d", &idade[i]);
        printf("Digite a altura: ");
        scanf("%lf", &alt[i]);
    }
    soma = 0;
    for (int i = 0; i < N; i++)
    {

        soma = soma + idade[i];
        media = soma / N;
    }
    printf("Media = %.2lf\n", media);
    nmenores = 0;
    for (int i = 0; i < N; i++)
    {
        if(idade[i] > 16)
        {
            nmenores++;
        }
    }

    x = 0;
    x = (double) nmenores *100 /N;
    printf("porcentagem de menores de 16 anos = %d %%\n", x);

    for (int i = 0; i < N; i++)
    {
        if(idade[i] < 16)
        {
            printf("%s\n", nome[i]);
        }
    }
    return 0;
}
