#include "main.h"
int realp(int nu, int i);

/**
 * is_prime_number- tells whether prime nmber or not
 * @n: is the number
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (realp(n, (n - 1)));
	}
}

/**
 * realp- the real prime
 * @nu: the number whose prime is needed
 * @i: counter
 * Return: 1 or 0
 */
int realp(int nu, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (nu % i == 0 && i > 1)
	{
		return (0);
	}
	else
	{
		return (realp(nu, (i - 1)));
	}
}
