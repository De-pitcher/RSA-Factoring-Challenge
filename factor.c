#include "factor.h"
#include <time.h>

/**
 * main - Entry point of the program
 * @argc: Argument count.
 * @argv: Vector list of arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
    FILE *fptr;
    size_t len;
    ssize_t line;
    char *buffer = NULL;
    clock_t start_time, end_time;
    double elapsed_time;
    
    start_time = clock();

    if (argc != 2)
    {
        fprintf(stderr, "Usage: factor <filename>\n");
        exit(EXIT_FAILURE);
    }
    fptr = fopen(argv[1], "r");
    if (fptr == NULL)
    {
        fprintf(stderr, "Error: can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((line = getline(&buffer, &len, fptr)) != -1)
        factorize(buffer);

    end_time = clock();
    elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("real    %.3fs\n", elapsed_time);
    printf("user    %.3fs\n", elapsed_time);
    printf("sys     0.000s\n");
    
    fclose(fptr);
    free(buffer);
    
    return (0);
}