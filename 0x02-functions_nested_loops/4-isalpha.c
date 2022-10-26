#include "main.h"

/**
 * _isalpha - check if character is alphabet
 * Return: 1 if alphabet else 0
 * @c: character to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
