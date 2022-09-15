#include "main.h"

/**
 * void print_numbers - A function that prints numbers (0 to 9).
 * Return: Always 0 (Successful)
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)

	{
		_putchar(i);
	}

	_putchar('\n');
}
