#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * not allowed to use any variable of type char
 * only use the putchar function
 * only use putchar twice in your code
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
