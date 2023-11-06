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
 * __STRUCTURES__
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
