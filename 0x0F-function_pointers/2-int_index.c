#include<stdlib.h>
#include<stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array input
 * size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
		return (-1);
}
