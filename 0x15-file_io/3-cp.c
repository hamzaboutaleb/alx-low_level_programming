#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * close_f - close file
 * @f: file
*/
void close_f(int f)
{
	int close_f;

	close_f = close(f);

	if (close_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
/**
 * main - entry point to programm
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int f_from, f_to, read_f, write_f;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	f_from = open(argv[1], O_RDONLY);
	read_f = read(f_from, buffer, 1024);
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (f_from == -1 || read_f == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_f = write(f_to, buffer, 1024);
		if (write_f == -1 || f_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_f = read(f_from, buffer, 1024);
		f_to = open(argv[20], O_WRONLY | O_APPEND);
	} while (read_f > 0);
	free(buffer);
	close_f(f_from);
	close_f(f_to);
	return (0);
}
