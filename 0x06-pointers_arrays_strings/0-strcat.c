#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (*dest != '\0')
	{
		len1++;
		dest++;
	}
	while (*src != '\0')
	{
		len2++;
		src++;
	}
	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
		i++;
	}
	dest[len1 + i] = '\0';
	return (dest);
}
