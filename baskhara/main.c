#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
    setlocale(LC_ALL, "portuguese");

{   double a, b, c, x1, x2, delta;

        system("color 0A");

        printf("digite os valores de A,B e C ");
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);

        delta = (b * b) - (4* a * c);

        //sinal de igualdade em C, dois sinais de igual

        if(a == 0 || delta < 0){
            printf("esta equacao não possui raizes reais\n");
        }
        else{
            x1 = (-b +  sqrt(delta)) / (2 * a);
            x2 = (-b -  sqrt(delta)) / (2 * a);

            printf("X1 = %lf\n", x1);
            printf("X2 = %lf", x2);
        }
    return 0;
}
