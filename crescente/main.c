#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 0A");
    int x, y;

    printf("digite os valores de x e y");
    scanf("%d", &x);
    scanf("%d", &y);

    while(x != y)
    {
        if(x > y)
        {
            printf("Decrescente\n");
            scanf("%d", &x);
            scanf("%d", &y);
        }
        else if(y > x)
        {
            printf("Crescente\n");
            scanf("%d", &x);
            scanf("%d", &y);
        }





    }


    return 0;
}
