#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char c;
	char b;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	b = 'A';
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
