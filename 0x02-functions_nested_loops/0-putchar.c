#include "main.h"

/**
 * main - Prints _putchar as a message followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "_putchar";

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return (0);
}
