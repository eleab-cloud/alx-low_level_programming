#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: 'using putchar with four times'
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 100; i++)
	{
		for (j = 0; j < 100 ; j++)
		{
			if (i < j)
			{
				putchar (48 + i / 10);
				putchar (48 + i % 10);
				putchar (' ');
				putchar (48 + j / 10);
				putchar (48 + j % 10);
				if (i != 98)

				{
					putchar (',');
					putchar (' ');
				}
			}
		}

	}
	putchar ('\n');
	return (0);
}
