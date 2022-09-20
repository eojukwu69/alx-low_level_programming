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
 * print_rev - function call
 * @s:  value
 * Return: value
 */
void print_rev(char *s)
{
	int i;

	int length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
