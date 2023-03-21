#ifndef _DOG
#define _DOG
/**
 * struct dog - define struct for dog
 * @name: dog's name parameter
 * @age: dog's age parameter
 * @owner: do's owner parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
