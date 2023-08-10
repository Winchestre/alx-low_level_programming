#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 * if min > max, return NULL
 * if malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *array, i;
	
	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);

	for (i = o; min <= max; i++; min++)
		array[i] = min;

	return (array);
}