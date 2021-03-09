#ifndef DOG_H
#define DOG_H
/**
 * struct dog_t - struct with dates.
 * @name: name.
 * @age: age.
 * @owner: owner.
 */
typedef struct dog_t
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
