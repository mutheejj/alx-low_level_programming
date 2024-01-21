#include "main.h"

char *rot13(char *str)
{
    char *ptr = str;

    while (*ptr != '\0') {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
            if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M')) {
                *ptr += 13;
            } else {
                *ptr -= 13;
            }
        }
        ptr++;
    }

    return str;
}
