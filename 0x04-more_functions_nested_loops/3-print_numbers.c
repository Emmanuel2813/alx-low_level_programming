#include "main.h"

/**
 * void print_numbers - A function that prints numbers (0 to 9).
 * follow by a new line
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
