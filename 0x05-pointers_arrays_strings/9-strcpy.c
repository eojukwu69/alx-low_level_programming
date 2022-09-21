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
 * _strcpy - function call
 * @src:  value
 * @dest:  value2
 * Return: value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	int length = _strlen(src);

	for (i = 0; i < length; i++)
		dest[i] = src[i];

	return (*dest);
}
