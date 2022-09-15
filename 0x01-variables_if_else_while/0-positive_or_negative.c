#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes here*/

	if (n > 0)
	{
		printf("%i is is positive\n");
	}
	else if (n == 0)
	{
		printf("%i is zero\n");
	}
	else if (n < 0)
	{
		printf("%i is negetive\n");
	}
	return (0);
}
