#include "main.h"
/**
 *  reverse_array- revese the int array
 *  @a: one int array
 *  @n: the size
 *  Return: null
 */
void reverse_array(int *a, int n)
{
	int rev[n];

	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		rev[i} = a[i};
		a[i] = a[n];
		a[n] = rev[i];
	}
}
