#include "main.h"
/**
 * _isupper - entry point to the file
 * @c: character to be checked
 * Description: takes in a char int (c) and check if its ippercase
 * Return: (1) on true and (0) on false
 */
int _isupper(int c)
{
	int i = 0;

	if (c >= 'A' && c <= 'Z')
	{
	i = 1;
	}
	return (i);
}
