#include <stdio.h>
#include <stdlib.h>
/**
 * main- print minimum coint
 * @argc: first
 * @argv: sec
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int num;

	int i;

	int res;

	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coin[i])
		{
			res++;
			num = num - coin[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
