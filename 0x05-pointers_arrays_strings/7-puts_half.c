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
 * puts_half - function call
 * @str:  value
 * Return: value
 */
void puts_half(char *str)
{
	int i;

	int length = _strlen(str);

	if (length % 2 != 0)
	{
		i = (length / 1) / 2;
	}
	else
	{
		i = length / 2;
	}

	for (; i < length; i++)
		_putchar(str[i]);

	_putchar('\0');
	_putchar('\n');

}
