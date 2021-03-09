#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct with dates.
 * @name: name.
 * @age: age.
 * @owner: owner.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
