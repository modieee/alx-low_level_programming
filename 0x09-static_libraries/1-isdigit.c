#include "main.h"
/**
 * _isdigit - function checks for digit
 * @c: function parameter
 * Return: 1 if true else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
