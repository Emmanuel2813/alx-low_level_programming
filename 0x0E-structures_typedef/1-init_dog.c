#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialises dog..
 * Description : A function that initialize a variable of type.
 *
 * @d: pointer to dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Return : Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
