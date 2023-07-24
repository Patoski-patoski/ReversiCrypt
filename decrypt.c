#include "header.h"

void decrypt(char *message, int secretsecretcode)
{
    int i;
    i = 0;
    for (i = 0; message[i] != '\0'; i++)
        ;

    for (i = strlen(message) - 1; i >= '\0'; i--)
        putchar(message[i] ^ secretsecretcode);
}