#include "main.h"
/**
 * factorial- returns factorial of a number
 * @n: is the number
 * Return: factorial
 */
int factorial(int n)
{
	int fact

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}
