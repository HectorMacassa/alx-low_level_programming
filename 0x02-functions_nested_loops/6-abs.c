#include "main.h"
/**
 * _abs - computes absolute value of an int
 * @n: the number to be computed
 * Return: Absolute valoue of int of 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
