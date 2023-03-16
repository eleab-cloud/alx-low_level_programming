#include <stdio.h>
#include <stdlib.h>

/**
 * main- intrance
 * @argc: one arg
 * @argv: another arg
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (argc = 1; argc < 3; argc++)
	{
		if (isdigit(argv[argc]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 + num2;

	printf("%d\n", result);
	return (0);
}
