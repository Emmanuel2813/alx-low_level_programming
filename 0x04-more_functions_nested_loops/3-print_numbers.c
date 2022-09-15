#include "main.h"
/**
 * void print_numbers - A function that prints numbers (0 to 9).
 * @n: 0 to 9
 */

void print_numbers(void)
{
	int n = 0;
		while (n < 10)
		{
			_putchar(n);
			n++;
		}
	_putchar("\n");

	return (0);

}
