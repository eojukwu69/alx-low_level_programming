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
 * rev_string - function call
 * @s:  value
 * Return: value
 */
void rev_string(char *s)
{
	int i;

	char a[500];

	int length = _strlen(s);

	for (i = 0; i < length; i++)
	{
		a[i] = s[(length - 1) - i];
	}

	for (i = 0; i < length; i++)
		s[i] = a[i];
}
