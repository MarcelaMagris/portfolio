#include <math.h>
#include <stdio.h>

int main() {
    int n1, n2;
    float med1;

    scanf("%d %d", &n1, &n2);
        
        med1 = (float)(n1+n2)/2;
        
    if (med1>=7.0)
        {
            printf("%.1f - Aprovado", med1);
           
        }
        
    else if (med1<5.0)
        {
            printf("%.1f - Reprovado", med1);
        }
        
    else
        {
            printf("%.1f - De Recuperacao", med1);
        }
        
}