#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * without q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
	if (i != 'e' && i != 'q')
	{
	putchar(i);
	}
	i++;
	}
	putchar('\n');
	return (0);
}
