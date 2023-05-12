#include <stdio.h>

/**
 * main - prints the number of args
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[1])

{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
