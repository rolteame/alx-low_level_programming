#include "main.h"
/**
 *_memset - put constant byte to pointer
 *@s: string
 *@char: character to point
 *@n: nmber
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
