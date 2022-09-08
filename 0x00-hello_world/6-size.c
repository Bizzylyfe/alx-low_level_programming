#include <stdio.h>

/**
 * main - entry point 
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int a;
	long int a;
	long long int a;
	char a;
	float a;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(a));
	return (0);
}
