#include <stdio.h>

void _puts(char *);

/**
 * main - prints a string, followed by a newline to stdout
 *
 * Return: Always 0.
 */

int main(void)

{
	char *str;

	str = "Holberton!";
	_puts(str);
	return (0);
}
