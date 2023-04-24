#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
