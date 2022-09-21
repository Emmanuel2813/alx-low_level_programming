#include"main.h"
#include <atdio.h>

/**
 * main - check the code for ALX School students
 * Return: Always 0
 */

int main(void)
{
	char s[] = "Expect the best. Prepare for the worse.
		Capitalize on what comes. \n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);

	return (0);
}
