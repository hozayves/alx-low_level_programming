#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function definition
 *
 * Description: A function that prints a struct dog
 * @d: structure declaration
 *
 * Return: something
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("%s\n", "Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
