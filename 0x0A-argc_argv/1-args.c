#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that prints its name, followed by a new line.
 *
 * Return: Program name
 */

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	printf("%d\n", argc - 1);
	return(0);
}
