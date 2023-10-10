#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int m = 0;

	while (*s != '\0')
	{
		m++;
		s++;
	}
	return (m);
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = _strlen(src);
	int j;

	for (j = 0; j < i; j++)
	{
	dest[j] = src[j];
	}
	dest[j] = '\0';
		return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s = malloc(sizeof(dog_t));
	if (s == NULL)
	{
		return (NULL);
	}

	s->name = malloc(sizeof(char) * (_strlen(name) + 1));
	_strcpy(s->name, name);
	s->age = age;
	s->owner = malloc(sizeof(char) *(_strlen(owner) + 1));
	_strcpy(s->owner, owner);

	return (s);
}

