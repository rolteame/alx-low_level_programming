#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the char
 *
 * @s: pointer
 * @c: char to find
 * Return: S or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return (NULL);
}

