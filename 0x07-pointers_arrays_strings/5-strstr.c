#include <stddef.h>
#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	int n, o;

	while (*haystack != '\0')
	{
		n++;
	}
	while (*needle != '\0')
	{
		o++;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < o; j++)
		{
		if (haystack[i] == needle[j])
		{
			return (haystack);
		}
		}
	}
	return (NULL);
}

