#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

char *buffer;

void read_err(int file, char *name)
{
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		free(buffer);
		exit(99);
	}
}
void write_err(int file, char *name)
{
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", name);
		free(buffer);
		exit(99);
	}
}
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
int main(int argc, char *argv[])
{
	int f_from, f_to, read_f, write_f;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	f_from = open(argv[1], O_RDONLY);
	read_f = read(f_from, buffer, 1024);
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);


	do {
		read_err(f_from, argv[1]);
		read_err(read_f, argv[1]);
		write_f = write(f_to, buffer, 1024);
		write_err(f_to, argv[2]);
		write_err(write_f, argv[2]);
		read_f = read(f_from, buffer, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_f > 0);

	free(buffer);
	close_f(f_from);
	close_f(f_to);
	return (0);
}
