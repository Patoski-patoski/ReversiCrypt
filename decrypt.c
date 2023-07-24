#include "header.h"

void decrypt(char *message)
{
    int i;
    while (*message)
        *message++ ^= 77;
}