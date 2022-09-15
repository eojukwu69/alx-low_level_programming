#include "main.h"
#include "_putchar.h"


/**
 * printchar - function called
 * @var: value
 * Description: print from 0 - 9
 * Return: returns the result
 */
void printchar(char var)
{
	_putchar(var);
}

/**
 * printint - function called
 * @var: value
 * Description: print from 0 - 9
 * Return: returns the result
 */
void printint(int var)
{

if (var < 0)
{
printchar('-');
var = var * -1;
}


if (var / 10)
printint(var / 10);

printchar((var % 10) + '0');
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
		printint(j);
		}
		printchar('\n');
	}
}
