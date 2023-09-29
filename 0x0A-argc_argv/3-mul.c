#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * _atoi_ - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi_(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; i++)
		result = result * 10 + str[i] - '0';
	return (sign * result);
}
/**
 * main - a program that multiplies two numbers.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x, y;
	(void)argc;
	(void)argv;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	x = _atoi_(argv[1]);
	y = _atoi_(argv[2]);

	printf("%d\n", x * y);
	return (0);
}
