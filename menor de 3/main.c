#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 0A");
    int a, b, c;
    printf("digite os valores a, b e c \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a <= b && a <= c)
    {
        printf("o menor numero e %d.", a);
    }
    else if(b <= a && b <= c)
    {
        printf("o menor numero e %d.", b);
    }
    else if(c <= b && c <= a)
    {
        printf("o menor numero e %d.", c);
    }


    return 0;
}
