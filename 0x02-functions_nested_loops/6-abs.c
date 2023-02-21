#include <stdio.h>
/**
 *_abs - print absolute value of n
 * @n: is char to be checked
 * Return: n if positive, -n if negative
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
