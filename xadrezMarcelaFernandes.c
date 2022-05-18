#include <stdio.h>

int main(){

    int l1 = 0, c1 = 0;
    int i, j;

    printf("Movimentos de uma Torre no xadrez!\n");

    printf("Digite a linha em que a Torre se encontra: ");
    scanf("%d", &l1);

    printf("Digite a coluna em que a Torre se encontra: ");
    scanf("%d", &c1);
    
    while (c1<1 || c1>8 || l1<1 || l1>8){
      printf("Digite a linha em que a Torre se encontra: ");
      scanf("%d", &l1);
    
      printf("Digite a coluna em que a Torre se encontra: ");
      scanf("%d", &c1);
    }
    
    printf("Movimentos possiveis:\n");

    printf("    1 2 3 4 5 6 7 8\n   -----------------");

    for (i = 1; i <= 8; i++){


        if (i != l1){

            if (c1 == 1){

                printf("\n%d | x - - - - - - -", i);
            }

            if (c1 == 2){

                printf("\n%d | - x - - - - - -", i);
            }
            if (c1 == 3){

                printf("\n%d | - - x - - - - -", i);
            }

            if (c1 == 4){

                printf("\n%d | - - - x - - - -", i);
            }

            if (c1 == 5){

                printf("\n%d | - - - - x - - -", i);
            }

            if (c1 == 6){

                printf("\n%d | - - - - - x - -", i);
            }
            if (c1 == 7){

                printf("\n%d | - - - - - - x -", i);
            }

            if (c1 == 8){

                printf("\n%d | - - - - - - - x", i);
            }


        }

        else if (i == l1){

        printf("\n%d | x x x x x x x x", i);

        }

    }

    return 0;

}