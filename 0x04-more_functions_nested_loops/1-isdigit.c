#include <main.h>

/**
 * _isdigit - checks for a digit
 * @c: input to be checked
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
