#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Check for alphabetic character
 * @c: Character to check
 * Return: 1 for a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
