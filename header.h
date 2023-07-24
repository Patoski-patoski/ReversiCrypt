#include <stdio.h> // standard input and ouput functions
#include <string.h> // string length
#include <stdlib.h> // For dynamic memory allocation

#define MAX_LINE 1024 // Initial size of the array

void encrypt(char *message, int secretcode);
void decrypt(char *message, int secretcode);