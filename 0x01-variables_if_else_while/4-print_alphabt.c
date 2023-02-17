#include <stdio.h>
/**
 * main - Print alphabets
 *
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
