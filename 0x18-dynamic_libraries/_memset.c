#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
    char *temp = s;

    while (n > 0)
    {
        *s = b;
        s++;
        n--;
    }

    return temp;
}
