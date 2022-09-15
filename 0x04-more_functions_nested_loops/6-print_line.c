#include "main.h"
#include "_putchar.h"

/**
 * print_line - function called
 * @n: value
 * Description: print from 0 - 9
 * Return: returns the result
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
