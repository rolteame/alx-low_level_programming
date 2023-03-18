#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers"\
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv)
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = argv[1];
	num2 = argv[2];
	mul = num1 * num2;
	
	printf("%d\n", mul);

	return (0);
}
