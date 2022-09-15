#include "main.h"
#include "_putchar.h"


/**
 * putchars - function called
 * @var: value
 * Description: print from 0 - 9
 * Return: returns the result
 */
void putchars(char var)
{
	_putchar(var);
}

/**
 * my_putchar - function called
 * @var: value
 * Description: print from 0 - 9
 * Return: returns the result
 */
void my_putchar(int var)
{

if (var < 0)
{
putchars('-');
var = var * -1;
}


if (var / 10)
my_putchar(var / 10);

putchars((var % 10) + '0');
}

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
		my_putchar(j);
		}
		putchars('\n');
	}
}