#include "main.h"
/**
 *_strpbrk - find particular byte
 *@s: string
 *@accept: serch characters
 *Return: return s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, x;

	i = 0;

	while (s[i] != '\0')
	{
		z = 0;

		while (accept[z] != '\0')
		{
			if (s[i] == accept[z])
				return (s[i]);
			z++;
		}
		i++;
	}
	return (NULL);
}
