#include <stdio.h>
/**
 * main - print all arguments
 * @argc: argument count
 * @argv: argument vectors
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	for (; count < argc; count++)
		printf("%s", argv[count]);

	return (0);
}
