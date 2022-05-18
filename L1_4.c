#include <stdio.h>
#include <math.h>

int main() {
    float raioC, areaC, raioCMeio, pi;

    scanf("%f", &raioC);

    pi = 3.141592;
    areaC = pow(raioC, 2) *  pi;
    raioCMeio = sqrt((areaC/2) / pi);
    
    printf("%.2f %.2f", areaC, raioCMeio);

    return 0;
}