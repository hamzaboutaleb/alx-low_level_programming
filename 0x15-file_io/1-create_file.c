#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - create file
 * @filename: name of file
 * @text_content: text to write in file
 * Return: 0 || -1
*/
int create_file(const char *filename, char *text_content)
{
	int fo, fw, len;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fo == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	len = strlen(text_content);
	fw = write(fo, text_content, len);

	if (fw == -1)
		return (-1);

	close(fo);
	return (1);
}
