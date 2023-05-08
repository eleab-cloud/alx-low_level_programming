#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file- reads a file
 * @filename: the file to be read
 * @text_content: the bytes to be read
 * Return: 1 on succsess
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	int w;

	int len;

	len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
