#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int isnumber(char *c);
/**
 * main- intrance
 * @argc: one arg
 * @argv: another arg
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int count;

	int sti;

	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (isnumber(argv[count]))
		{
			sti = atoi(argv[count]);
			sum = sum + sti;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * isnumber- intrance
 * @c:string
 * Return: always zero
 */
int isnumber(char *c)
{
	unsigned int len = 0;

	int i;

	while (len < strlen(c))
	{
		if (!isdigit(c[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
