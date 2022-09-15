#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a', ch <= 'z', ch++)
	{
		putchar(ch);
	}
	putcahr('\n');
	return (0);
}
