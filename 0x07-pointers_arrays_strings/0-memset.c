#include "main.h"
/**
 *_memset - put constant byte to pointer
 *@s: string
 *@b: character to point
 *@n: number
 *Return: return pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
