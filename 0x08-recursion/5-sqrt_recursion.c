#include "main.h"
int sqrt1(int n, int i);

/**
 * _sqrt_recursion- tells whether prime nmber or not
 * @n: is the number
 * Return: the sqrt or -1 if there is no sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt1(n, 0));
	}
}

/**
 * sqrt1- the real sqrt
 * @n: the number whose prime is needed
 * @i: counter
 * Return: i or -1
 */
int sqrt1(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt1(n, (i + 1)));
	}
}
