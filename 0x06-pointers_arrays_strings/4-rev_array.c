#include "main.h"

/**
 * reverse_array - function call
 * @a:  value
 * @n:  value2
 * Return: value
 */
void reverse_array(int *a, int n)
{
	int arr[n];

	for (i = 0; i < n; i++)
	{
		arr[i] = a[n - 1 - i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = arr[i];
	}

}
