#include "main.h"
/**
 * _memcpy - copy char to pointer
 * @dest: destination pointer
 * @src: source pointer
 * n: number
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
