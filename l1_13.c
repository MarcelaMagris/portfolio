#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i1, p1, l1;
    

    scanf("%d %d", &p1, &i1);
    
    l1 =  (i1%p1)-(i1/p1);
    
    if (p1==i1)
    {
        printf("RESP:%d", p1);
    }
    else if (l1==0)
    {
        l1 = l1+1;

        printf("RESP:%d", l1);
    }
    else if (l1<0)
    {
        l1 = l1*(-1);

        printf("RESP:%d", l1);
    }
    else
    {
        printf("RESP:%d", l1);
    }
}