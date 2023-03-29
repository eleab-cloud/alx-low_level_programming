#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add- addition
 * @a: furst num
 * @b: second num
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- return substraction
 * @a: first num
 * @b: second num
 * Return: substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul- multiply
 * @a: num1
 * @b: num2
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div- division
 * @a: num1
 * @b: num2
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod- division
 * @a: num1
 * @b: num2
 * Return: division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
