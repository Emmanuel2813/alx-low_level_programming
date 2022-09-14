#include "main.h"
/**
 * main - Prints the alphabet 10 times.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			putchar(b);
		}
	putchar('\n');
	}
	return (0);
}
