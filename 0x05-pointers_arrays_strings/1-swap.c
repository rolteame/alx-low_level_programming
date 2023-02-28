#include "main.h"
/**
 * swap_int - swap integals
 * @a: first Number
 * @b: second Number
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
