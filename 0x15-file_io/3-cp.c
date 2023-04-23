#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * cr_buf - allocate 1024 byte buf
 * @file: the file the buf for
 * Return: pointer to the buf
 */
char *cr_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can not write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * close_file- closes a file disc
 * @fd: file disccriptor
 * Return: nothing
 */
void close_file(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: can not close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main- copies the content of one file to another
 * @argc: no of arguments
 * @argv: array of pointers to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int f;

	int to;

	int r;

	int w;

	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "copy file f file to\n");
		exit (97);
	}
	buf = cr_buf(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do
	{
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: can not read from %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(to, buf, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: can not write to%s\n", argv[2]);
                        free(buf);
                        exit(99);
		}
		r = read(f, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	close_file(f);
	close_file(to);
	return (0);
}

