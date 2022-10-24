#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		if (i == 9)
			break;

		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
