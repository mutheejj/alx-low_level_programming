#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
    {
        char *temp_h = haystack;
        char *temp_n = needle;

        while (*temp_h == *temp_n && *temp_n != '\0')
        {
            temp_h++;
            temp_n++;
        }

        if (*temp_n == '\0')
            return haystack;

        haystack++;
    }

    return NULL;
}
