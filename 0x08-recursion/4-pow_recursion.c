#include "main.h"
/**
 * _pow_recursion- returns factorial of a number
 * @x: is the number
 * @y: the power
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	int r;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		r = x * _pow_recursion(x, (y - 1));
		return (r);
	}
}
