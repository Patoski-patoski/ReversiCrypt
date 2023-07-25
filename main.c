#include "header.h"

int main(int argc, char *argv[])
{
    char arr[MAX_LINE];

    int c, i;
    i = 0;
    while ((c = getchar()) != EOF)  //get char from stdout
    {
        arr[i] = c;
        i++; 
    }
    arr[i] = '\0';

    argv[0] = 0;
    encrypt(arr, atoi(argv[1])); // convert to int

    return (0);
}