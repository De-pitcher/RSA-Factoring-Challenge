#include "factor.h"

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
	char *buffer;

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

	fclose(fptr);
	free(buffer);

	return (0);
}
