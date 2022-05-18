#include <stdio.h>
#include <math.h>

int main() {
    int N1, N2;
    float result;

    scanf("%d", &N1);
    scanf("%d", &N2);
    
    result = sqrt (N1) + sqrt (N2);

    printf("%d + %d = %.2f", N1, N2, result);

    return 0;
}