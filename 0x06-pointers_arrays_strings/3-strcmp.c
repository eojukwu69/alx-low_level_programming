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
 * _strcmp - function call
 * @s1:  value
 * @s2:  value2
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	int length = _strlen(s1);

	for (i = 0; i < length; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
