#include "main.h"
/**
 *_memset - put constant byte to pointer
 *@s: string
 *@char: character to point
 *@n: nmber
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		*s[i] = b;
		i++;
	}
	return (s);
}
