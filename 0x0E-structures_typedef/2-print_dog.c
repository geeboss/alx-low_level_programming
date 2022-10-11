#include <stdio.h>
#include "dog.h"
/**
 * printf_dog - prints a struct dog
 * @d: pointer to struct type dog
 * Author: Gee Boss
 * Return: Nothing cause it's void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");

		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");

		else
			printf("Owner: %s\n", d->owner);
	}
}

