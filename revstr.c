#include "header.h"

void revstr(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        ;
    s[i] = '\0';

    for (i--; s[i] != '\0'; i--) // reversing order 
       putchar(s[i]);
    s[i] = '\0';
}

