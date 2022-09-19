#include"main.h"

/**
 * swap_int - swaps the values of two integers
 *
 *  Description: swaps two integers using two parameters
 *
 * @a: input parament 1
 *
 * @b: input parament 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
