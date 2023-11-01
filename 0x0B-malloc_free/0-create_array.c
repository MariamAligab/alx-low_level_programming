#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array with
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (0);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (0);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
