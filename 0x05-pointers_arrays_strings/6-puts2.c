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
 * puts2 - function call
 * @str:  value
 * Return: value
 */
void puts2(char *str)
{
	int i;

	int length = _strlen(str);

	for (i = 0; i < length; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');

}
