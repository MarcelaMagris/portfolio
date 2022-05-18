#include <stdio.h>
#include <math.h>

int main() {
    float xInfE, yInfE, xSupD, ySupD, perimetro;

    scanf("%f %f", &xInfE, &yInfE);
    scanf("%f %f", &xSupD, &ySupD);
    perimetro = (2*((ySupD - yInfE) + (xSupD - xInfE)));
    
    printf("%.2f", perimetro);

    return 0;
}