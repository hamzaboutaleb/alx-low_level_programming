#include <stdio.h>
#include <sys/types.h>
/**
 * read_textfile - read n letters from file
 * @filename: pointer to file name
 * @letters: number of letters to print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE* fptr;
	char c;
	size_t i;

	if (filename == NULL)
		return (0);

	fptr = fopen(filename, "r");

	if (fptr == NULL)
		return (0);

	while ((c = fgetc(fptr)) != EOF && i < letters)
	{
		_putchar(c);
	}

	fclose(fptr);

	return (i);
}
