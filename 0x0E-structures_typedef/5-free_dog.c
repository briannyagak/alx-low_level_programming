#include<stdio.h>
#include "dog.h"
#include<stdlib.h>
/**
 * free_dog - frees memory
 *@d: struct input
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
