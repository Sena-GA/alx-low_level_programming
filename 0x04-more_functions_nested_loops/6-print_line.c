#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: number fo time the character '_' should be printed
 * Return:
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
