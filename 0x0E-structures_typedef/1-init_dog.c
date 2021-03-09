#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  initialize a variable of type struct dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 * @d: pointer.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
