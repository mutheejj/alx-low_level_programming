#include "main.h"

char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        while (*accept != '\0')
        {
            if (*s == *accept)
                return s;
            accept++;
        }
        accept -= _strlen(accept); /* Reset accept to the beginning */
        s++;
    }

    return NULL;
}
