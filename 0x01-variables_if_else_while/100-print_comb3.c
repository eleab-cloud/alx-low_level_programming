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

	for (i = 0 ; i < 9; i++)
	{
		for (j = 1; j < 10 ; j++)
		{
			if ( i < j )
			{
				putchar (48 + i);
				putchar (48 + j);
				if (i != 8 )
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
