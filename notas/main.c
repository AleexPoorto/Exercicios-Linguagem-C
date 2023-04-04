#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, notafinal;

    printf("digite a primeira nota ");
    scanf("%lf", &nota1);
    printf("digite a segunda nota ");
    scanf("%lf", &nota2);
    notafinal= nota1 + nota2;
    printf("NOTA FINAL: %.2lf\n ", notafinal);
        if(notafinal >= 60){
            printf("APROVADO!!");
        }
        else{
            printf(" REPROVADO!!");
        }
    return 0;
}
