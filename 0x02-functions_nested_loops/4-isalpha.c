#include "main.h"
/**
 * main - checks for alphabetic character
 * Return: 1 if c is a letter, 0 otherwise
 */

int main(void)
{
	char alpha;
	if (alpha >= 97 && alpha <= 122 && alpha >= 65 && alpha <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar ('\n');
	return (0);
}
