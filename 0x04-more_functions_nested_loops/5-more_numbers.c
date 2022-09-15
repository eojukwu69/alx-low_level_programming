#include "main.h"
#include "_putchar.h"

/**
 * more_numbers - function called
 * Description: print from 0 - 9
 * Return: returns the result
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
