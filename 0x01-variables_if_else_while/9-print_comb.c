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

	for (i = 0 ; i < 10; i++)
	{
		for (j = 0 ; j < 10; j++)
		{
			putchar (48 + i);
			putchar (',');
			putchar (48 + j);
			putchar (' ');
		}
	}
	return (0);
}
