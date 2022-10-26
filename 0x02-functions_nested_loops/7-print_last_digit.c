#include "main.h"

/**
 * print_last_digit - compute absolute value of number
 * Return: number
 * @n: character to be checked
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = -(n % 10);
		_putchar(i + '0');
		return (i % 10);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
