#include "main.h"

/**
 * void _puts_recursion - Prints a string, followed by a new line.
 * @s: string parameter to print.
 * Return: 0 success
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{

		_putchar(*s + 0);
		++s;
	}
	_putchar('\n');
}
