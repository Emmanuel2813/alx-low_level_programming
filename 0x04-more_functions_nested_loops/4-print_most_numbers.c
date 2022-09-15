#include "main.h"

/**
 * void print_most_numbers - print numbers from '0' to '9' but skip '2' and '4'
 * Return: Always 0 (Success)
 */

void print_most_numbers(void);

{

	char ch = '0';


	while (ch <= '9')

	{

		if ((ch != '2') && (ch != '4'))

		{
			_putchar(ch);

		}

		ch++;

	}

	_putchar('\n');

}
