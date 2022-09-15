#include "main.h"
#include "_putchar.h"

/**
 * print_most_numbers - function called
 * Description: pri t from 0 - 9
 * Return: returns the result
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
