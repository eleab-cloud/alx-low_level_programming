#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: 'prints alphabet a to z'
* Return: Always 0 (Success)
*/
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar (i);
	}
	putchar ('\n');
}