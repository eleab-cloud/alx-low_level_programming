#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isnumber- intrance
 * @c:string
 * Return: always zero
 */
int isnumber(char *c)
{
	int len == 0;

	int i;

	while (c != '\0')
		len = len++;
	for (i = 0; i <= len; i++)
	{
		if (isdigit(c[i] == 0))
		{
			return (0);
		}
	}
}
/**
 * main- intrance
 * @argc: one arg
 * @argv: another arg
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int result = 0;

	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (isnumber(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		result = result + argv[i];
	}
	printf("%d\n", result);
	return (0);
}
