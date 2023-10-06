#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this funcion will assign a random number to n
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (n = 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else 
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
