#include "factor.h"

/**
 * _atoi - converts string buffer in to long int
 * @str: string buffer.
 * 
 * Return: long int equivalent of the converted string.
*/

long int _atoi(const char *str)
{
    char *endptr;
    long int result = strtol(str, &endptr, 10);

    if (*endptr != '\0' && *endptr != '\n')
    {
        fprintf(stderr, "Error: Invalid number format\n");
        exit(EXIT_FAILURE);
    }

    return (result);
}