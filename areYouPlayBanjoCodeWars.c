#include <stdlib.h>
#include <string.h>

char *are_you_playing_banjo(const char *name) {
  char *r = (char*)calloc(strlen(name) + 20, 1);
    strcpy(r, name);
    strcat(r, (name[0] == 'R' || name[0] == 'r') ? " plays banjo" : " does not play banjo");
    return r;
}