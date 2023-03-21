#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - A function that creates a new dog
 * @name: dog's name parameter
 * @age: dog's age parameter
 * @owner: dog's owner parameter
 *
 * Return: a pointer of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;

	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
		return (NULL);
	_dog->name = name;
	_dog->age = age;
	_dog->owner = owner;

	return (_dog);
}
