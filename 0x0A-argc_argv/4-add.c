#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[1])
{
	int i;
	unsigned int k, sum = 0;
	char *z;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			z = argv[i];
			for (k = 0; k < strlen(z); k++)
			{
				if (z[k] < 48 || z[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			 sum += atoi(z);
			 z++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
