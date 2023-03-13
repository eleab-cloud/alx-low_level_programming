#include <stdio.h>
/**
 * main- intrance
 * @argc: one arg
 * @argv: another arg
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
