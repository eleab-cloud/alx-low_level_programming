#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile- reads a file
 * @filename: the file to be read
 * @letters: the bytes to be read
 * Return: number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;

	ssize_t w;

	ssize_t sz;

	char *R;

	R = malloc(sizeof(char) * letters);

	if (R == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	sz = read(fd, R, letters);
	if (sz < 0)
	{
		return (0);
	}
	w = write(1, R, sz);
	if (w < 0)
	{
		return (0);
	}
	free(R);
	close(fd);
	return (w);
}
