#include "main.h"

/**
 * _islower - check for lowercase character
 * Return: 1 if lowercase else 0
 * @c: character to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
