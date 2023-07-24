#include "header.h"

int main(void)
{
    char arr[200];
    char newarr[200];
    int c, i, j;
    i = 0;
    j = 0;
    while ((c = getchar()) != EOF)
    {
        arr[i] = c;
        newarr[j] = arr[i];
        i++; 
        j++;
    }
    arr[i] = '\0';
    newarr[i] = '\0';

    encrypt(newarr);
    // revstr(newarr);
    // decrypt(newarr);

    printf("%s\n", newarr);

}