#include "main.h"
/**
 * _strncat - concat two stringd
 * @dest: string 1
 * @src: string 2
 * @n: mumbered string
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *dest[i] != '\0'; i++)
		;

	for (int j = 0; j <= n; j++)
	{
		*dest[i] = *src[j];
		i++;
	}
	return (*dest);
}
