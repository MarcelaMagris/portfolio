#include <stdio.h>
#include <math.h>

int main() {
    int a, x1, d2, d3;

    scanf("%d", &a);
    
    x1 = 1; 
    d2 = x1%2;
    d3 = x1%3;
    printf("%d %d %d %d", a, x1, d2, d3);

    while(x1 < a){
        
        
        if(d2 == 0)
                {printf("%d ", x1);}

        else if(d3 == 0)
            {printf("%d ", x1);}

        x1 + 1;
    }
    return 0;
}