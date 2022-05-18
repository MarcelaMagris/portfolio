#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1;
    char x;
    float n2;

    scanf("%d %c", &n1, &x);
    
  
    if (x=='c'||x=='C')
    {
        n2=(n1 * 1.8) + 32;
        printf("%.2f (F)", n2);
        
    }
    
    else
    {
        n2=(n1-32) / 1.8;
        printf("%.2f (C)", n2);
        
    }
    
    return 0;
}