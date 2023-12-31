#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: input integer array argument
 * @size: size of array argument
 * @cmp: pointer to the function
 * Return: index of first element for which the cm
 * function does not return 0. If no element match
 * , return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
