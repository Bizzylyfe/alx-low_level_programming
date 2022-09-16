#include "main.h"
/**
 *  _isupper - checks if the character is in upper case or not
 *
 * @c: character tested
 *
 * Return: 1 if true, and 0 if not
 */
int _isupper(int c)
{
	if ((c = 'A') && (c = 'Z'))
	{
		return (1);
	}
	return (0);
}
