#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: 'display base 16 numbers'
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char ch;

	for (i = 0 ; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
