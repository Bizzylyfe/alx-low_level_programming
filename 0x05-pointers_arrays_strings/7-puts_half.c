#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int c = 0;
	int d = strlen(str);

	if (d % 2 != 0)
	{
		c = ((d - 1) / 2);
		_putchar(str[c] % 2)
	}
	_putchar(str[c] % 2);

}
