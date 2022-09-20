#include "main.h"
/**
 * _puts - function call
 * @str:  value
 * Return: value
 */
void _puts(char *str)
{
	int i;
	
	for (i = 0, str[i] != '\0', i++)
	{
		_putchar(str[i]);
	}
}
