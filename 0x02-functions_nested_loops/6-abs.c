#include "main.h"

/**
 * _abs - compute absolute value of number
 * Return: number
 * @n: character to be checked
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
