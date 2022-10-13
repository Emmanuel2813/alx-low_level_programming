#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 *
 * @name: name of the person.
 * @f: pointer to name.
 *
 * return: Always 0(success).
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	(*f)(name);
}
