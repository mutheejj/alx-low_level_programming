#include "main.h"
/**
 * print_buffer - add 2 strings.
 * @b: string1.
 * @size: string2.
 * Return: String with all letters in ROT13 base.
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = i; j < i + 10; j++)
	{
		if (j < size)
                printf("%02x", (unsigned char)b[j]);
            else
                printf("  ");

            if (j % 2 != 0)
                printf(" "); // Add a space after every two bytes
        }

        // Print the content of the buffer, replacing non-printable characters with '.'
        for (j = i; j < i + 10 && j < size; j++)
        {
            if (b[j] >= 32 && b[j] <= 126)
                printf("%c", b[j]);
            else
                printf(".");
        }

        printf("\n");
    }
}
