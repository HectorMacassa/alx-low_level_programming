#include <stdio.h>
/**
 * Main - prints single digits of base 10
 * Return: 0
 */
int main(void)
{
	int n;

	for  (n = 0; n <= 9; n++)
	{
		putchar("%d", n);
	}
	putchar("\n");
	return (0);
}
