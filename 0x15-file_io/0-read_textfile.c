#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include "main.h"
/**
 * read_textfile - read n letters from file
 * @filename: pointer to file name
 * @letters: number of letters to print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fopen;
	char *buffer;
	int fread, fwrite;

	if (filename == NULL)
		return (0);

	fopen = open(filename, O_RDONLY);

	if (fopen == -1)
		return (0);
	buffer = (char *) malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fread = read(fopen, buffer, letters);
	fwrite = write(STDOUT_FILENO, buffer, fread);
	free(buffer);
	if (fread == -1 || fwrite == -1)
		return (0);

	close(fopen);
	return (fread);
}
