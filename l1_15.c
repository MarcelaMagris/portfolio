#include <stdio.h>
#include <math.h>

int main() {
    int n1, i1, r1, u1, d1, c1, pi1;

    n1 >=0 && n1 <= 99999;

    scanf("%d %d", &n1, &i1);

    r1= n1 % 10;

    if (i1 ==1)
    {
        u1 = n1 - r1;

        pi1 = r1 % 2;

        if (pi1 == 0)
        {
            printf("PAR");
        }
        
        else
        {
            printf("IMPAR");
        }
    }

    else if (i1 == 2)
    {
        u1 = r1 % 10;

        d1 = (n1 - u1) / 10;

        pi1 = d1 % 2;

        if (pi1 == 0)
        {
            printf("PAR");
        }
        
        else
        {
            printf("IMPAR");
        }
    }
    else if (i1 == 3)
    {
        u1 = r1 % 10;

        d1 = u1 %10;
        
        c1 = (n1 - d1) / 100;

        pi1 = c1 % 2;

        if (pi1 == 0)
        {
            printf("PAR");
        }
        
        else
        {
            printf("IMPAR");
        }
    }
    return 0;

}