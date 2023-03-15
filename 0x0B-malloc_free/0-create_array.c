#include "main.h"
/**
 *create_array - create array using malloc
 *@size: size of array
 *@c: character to be passed
 *Return: return array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
	}
	return (ar);

}
