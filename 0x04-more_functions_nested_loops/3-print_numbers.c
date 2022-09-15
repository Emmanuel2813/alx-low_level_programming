#include "main.h"
/**
 * void print_numbers - A function that prints numbers (0 to 9).
 */

void print_numbers(void)

{
	int ch;

	for (ch = '0'; ch < '10'; ch++)
	{
		_putchar(ch);
	}
	_putchar("\n");
}
