#include <stdio.h>
/**
 * main - print all arguments
 * @argc: argument count
 * @argv: argument vectors
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
