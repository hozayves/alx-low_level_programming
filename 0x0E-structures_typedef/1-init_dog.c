#include "dog.h"
/**
 * init_dog - function definition
 * Description: A function that initialize a variable of type struct dog
 * @d: parameter
 * @name: name parameter
 * @age: age parameter
 * @owner: owner paremeter
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
