include "main.h"


/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */

void print_most_numbers(void)

{

	int i;

	for (i = 0; i < 10; i++)

	{
	if (i != 2  && i != 4)
	_putchar(i);
	}
	_putchar('\n');
}
