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
	int k;

	for (i = 0 ; i < 8; i++)
	{
		for (j = 1; j < 9; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if (i < j && j < k)
				{
					putchar (48 + i);
					putchar (48 + j);
					putchar (48 + k);
					if (i != 7)
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}

	}
	putchar ('\n');
	return (0);
}
