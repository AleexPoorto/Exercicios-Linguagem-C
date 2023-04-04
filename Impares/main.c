#include <stdio.h>
#include <stdlib.h>

int main()
{   int x, y, soma, troca;

    printf("digite os valores x e y: ");
    scanf("%d", &x);
    scanf("%d", &y);
    soma= 0;
    if(x > y){
        troca = x;
        x = y;
        y = troca;
    }

    for(int i = x + 1; i < y; i++){
        if(i % 2 != 0)
            soma = soma + i;
    }

    printf("SOMA DOS NUMEROS IMPARES: %d", soma);



    return 0;
}
