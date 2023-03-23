#include "function_pointers.h"

/**
 * print_name - print name passed to function
 * @name: passed name
 * @f: function pointer
 * Return: none
 */

 void print_name(char *name, void (*f)(char *))
{
	f(name);
}
