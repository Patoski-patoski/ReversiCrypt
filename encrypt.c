#include "header.h"

void encrypt(char *message, int secretcode)
{
    int i;
    if (secretcode == 0)
    {
        fprintf(stderr, "********************************\n");
        fprintf(stderr, "\n%s","Weak encryption! Try again!\n");
        fprintf(stderr, "\n********************************");

        return;
    }
        
    i = 0;
    for (i = 0; message[i] != '\0'; i++)
        ;

    for (i = strlen(message) - 1; i >= '\0'; i--)
        putchar(message[i] ^ secretcode);
}