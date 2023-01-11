#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * @c: char stored.
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
		return (NULL);

	m = malloc(sizeof(c) * size);

	if (m == NULL)
		return (NULL);

	for (i= 0; i < size; i++)
		m[i] = c;

	return (m);
}
