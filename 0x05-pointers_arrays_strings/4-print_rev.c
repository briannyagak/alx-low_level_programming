#include "main.h"

/**print_rev - a function that prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	while(*s != '\0')
	{
		len++;
		s++;
	}
	for ( i = len; i > 0; i--)
	{
		putchar(*s);
		s++;
	}
}
