#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter.
 *
 * @size: is the size of the array.
 * @action: is a pointer to the function you need to use.
 * @array: arrayof numbers.
 *
 * Return: Always 0(success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
	for (index = 0; index < size; index++)
	action(array[index]);
}
