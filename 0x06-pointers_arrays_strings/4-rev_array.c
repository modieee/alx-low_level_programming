#include "main.h"

/**
 * reverse_array - reverse array function
 * @a: function parameter
 * @n: function parameter
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
