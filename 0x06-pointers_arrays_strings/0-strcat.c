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
 * _strcat - function call
 * @src:  value
 * @dest:  value2
 * Return: value
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int length = _strlen(src);

	int length2 = _strlen(dest);

	int count = 0;

	for (i = length; i < length + length2; i++)
	{
		dest[i] = src[count];
		count += 1;
	}
	dest[i + 1] = '\0';

	return (dest);
}
