#include <stdio.h>
#include <stdlib.h>
/**
 * main - print coins
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }
    int cents = atoi(argv[1]);
    if (cents < 0) {
        printf("0\n");
        return 0;
    }
    int num_coins = 0;
    num_coins += cents / 25;
    cents = cents % 25;
    num_coins += cents / 10;
    cents = cents % 10;
    num_coins += cents / 5;
    cents = cents % 5;
    num_coins += cents / 2;
    cents = cents % 2;
    num_coins += cents;
    printf("%d\n", num_coins);
    return 0;
}
