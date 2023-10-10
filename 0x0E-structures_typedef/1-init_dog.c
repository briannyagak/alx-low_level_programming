#include "dog.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * init_dog - a function that initialize a variable of type
 * @d: struct name
 * @name: input
 * @age: input
 * @owner: input
 * Return: 0 Always a success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
