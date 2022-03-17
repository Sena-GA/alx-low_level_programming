#include "main.h"

/**
 * _isdigit - checks if a number is between 0 to 9.
 * @c: input number to be checked.
 * Return: 1 if c is a digit, else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
