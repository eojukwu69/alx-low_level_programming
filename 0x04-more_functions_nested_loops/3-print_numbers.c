#include "main.h"
#include "_putchar.h"

/**
 * print_numbers - function called
 * Description: pri t from 0 - 9
 * Return: returns the result
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
