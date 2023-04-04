#include <stdio.h>
#include <stdlib.h>

int main()
{   system("color 0A");

    int num, loop, res;
    loop = 1;
        printf("digite o numero ");
        scanf ("%d", &num);

        do{


                res = num * loop;
                printf ("%d x %d = %d\n ", num, loop, res);
                loop = loop + 1;
        }
        while(loop <= 10);





    return 0;
}
