#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: string source
 * @dest: string destination
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;

	while (src[b] != '\0');
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
