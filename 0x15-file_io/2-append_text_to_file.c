#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - append to file if only exist
 * @filename: filename
 * @text_content: text to appedn a file
 * Return: 1 if success -1 otherwise
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fp;
	int len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fo = open(filename, O_APPEND | O_WRONLY);

	if (fo == -1)
		return (-1);

	len = strlen(text_content);
	fp = write(fo, text_content, len);
	if (fp == -1)
		return (-1);

	close(fo);

	return (1);
}
