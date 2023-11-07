#ifndef _DOG_H_
#define _DOG_H_


/**
 * struct dog - Struct describing a dog.
 *
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog Owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *init_dog - Main Functiion.
 *@d: struct.
 *@name: name.
 *@age: age.
 *@owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
