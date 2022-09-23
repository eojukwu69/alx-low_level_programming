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
 * _strncpy - function call
 * @src:  value
 * @dest:  value2
 * @n: number of bytes
 * Return: value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	int length = _strlen(src);

	if (n <= length)
	{
		length = n;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
