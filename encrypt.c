#include "header.h"

void encrypt(char *message)
{
    int i;
    while (*message)
        *message++ ^= 77;
}