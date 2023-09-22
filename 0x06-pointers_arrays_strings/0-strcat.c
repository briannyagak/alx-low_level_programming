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
	int len1, len2, i;

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
	len1++;
	len2++;
	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
