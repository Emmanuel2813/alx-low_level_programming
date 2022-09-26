#include "main.h"

/**
 * _memcpy - function that copy memory area
 * @src: what to copy
 * @dest: buffer where we will copy to
 * @n: unsigned number of bytes of @src
 * Return: Always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
