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
