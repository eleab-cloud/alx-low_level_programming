#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: 'main function'
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar (i);
		}
		putchar ('\n');
	}
}
