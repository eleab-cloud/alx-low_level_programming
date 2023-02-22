#include <stdio.h>
/**
 * main - print sum of multiple of 3 or 5
 * Return: zero
 */
int main(void)
{
	int i, x, y, s;
	int j = 0;

	for (i = 0; i < 1024; i++)
	{
		x = i % 3;
		y = i % 5;
		if (x == 0 || y == 0)
		{
			s = x + y;
		}
		j = j + s;
	}
	printf("%d\n", j);
	return (0);
}
