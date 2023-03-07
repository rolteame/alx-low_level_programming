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
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
