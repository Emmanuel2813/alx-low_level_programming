#include "main.h"
/**
 * main - A function that prints alphabet.
 * Return: Always 0.
 * Description: The programme should return 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
