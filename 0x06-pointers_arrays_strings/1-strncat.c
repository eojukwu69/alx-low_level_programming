#include "main.h"

/**
 * _strlen - function call
 * @s: value
 * Return: value
 */
int _strlen(char *s)
{
	int i = 0;

	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count += 1;
	}
	return (count);
}

/**
 * _strncat - function call
 * @src:  value
 * @dest:  value2
 * @n: number of bytes
 * Return: value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int length2 = _strlen(dest);

	int length = _strlen(src);

	int count = 0;


	if (n < length)
	{
		length = n;
	}

	for (i = length2; i < length + length2; i++)
	{
		dest[i] = src[count];
		count += 1;
	}

	return (dest);
}
