// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main(){
    float x, y, z;

    scanf("%f %f %f", &x, &y, &z);
    //printf("%f %f %f", x, y, z);
    if (x>0 && y>0 && z>0){
        printf("1º Octante");
    }
    else if (x<0 && y>0 && z>0){
        printf("2º Octante");
    }
    else if (x<0 && y<0 && z>0){
        printf("3º Octante");
    }
    else if (x>0 && y<0 && z>0){
        printf("4º Octante");
    }
    else if (x>0 && y>0 && z<0){
        printf("5º Octante");
    }
    else if (x<0 && y>0 && z<0){
        printf("6º Octante");
    }
    else if (x<0 && y<0 && z<0){
        printf("7º Octante");
    }
    else if (x>0 && y<0 && z<0){
        printf("8º Octante");
    }
    
return 0;
}