#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, perimetro;

    scanf("%f", &base);
    scanf("%f", &altura);
    perimetro = (2*(base + altura));
    printf("%.2f", perimetro);

return 0;
}