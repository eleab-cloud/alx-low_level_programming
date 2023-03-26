#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name- print name by calling a function
 * @name: to be printed
 * @f: the function to call
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
