#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char x;
    int a;

    scanf("%c", &x);

        if (isalpha(x))
        {
            

            if (islower(x))
            {
                a = ((int)x -32);
                printf("%c(%d)", a, a);
            }
            
            else if(isupper(x))
            {
                printf("A letra deve ser minuscula!");
            }
           
        }
        else
        {
            printf("Nao e letra!");
        }

return 0;
}