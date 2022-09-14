#include "main.h"
/**
 * print_alphabet - prints alphabets from a-z
 *
 * Description - You can only use _putchar twice in your code
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
