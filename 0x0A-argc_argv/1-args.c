#include <stdio.h>
/**
 * main - print number of argument passed
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
