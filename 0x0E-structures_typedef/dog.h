#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog's basic information
 * @name: first member
 * @age: second member
 * @owner: third member
 *
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