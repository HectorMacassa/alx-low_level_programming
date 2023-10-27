#include "main.h"
/**
 * sqrt_a - calculates the square root of anumber
 * @a: the number for which to calculate the square root
 * @b: iterator
 *
 * Return: square root or -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > 4)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: the number for which to calculate the square root
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
