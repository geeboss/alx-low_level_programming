#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name oassed to it
 * @name: char to display to the stdout
 * @f: A pointer function
 * Author: Gee Boss
 * Return: No return cause we've declared VOID as R_TYPE
 */
void print_name(char *name, void (*f)(char *))
{
		if (name || !f) /* If any is NULL */
			return;

		f(name);
}
