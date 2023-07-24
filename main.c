#include "header.h"

int main(void)
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

    encrypt(arr, 20);

    return (0);
}