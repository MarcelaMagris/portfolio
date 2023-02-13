#include <stddef.h>

int sum_array(const int *values, size_t count){
  //if (values[]==0) return 0;
  int soma=0, i=0;
  int conta = (int) count;
  for(i=0; i<conta; i++){
    soma+=values[i];
  }
  return soma;
}