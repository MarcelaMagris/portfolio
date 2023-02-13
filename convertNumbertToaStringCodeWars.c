#include <stdlib.h>

char *number_to_string(int number) {
  char *string;
    //  <----  hajime!
  
  asprintf(&string, "%d", number);
  return string;
  return calloc(1, 1); // memory will be freed
}