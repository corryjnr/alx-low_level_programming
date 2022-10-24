#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i;
	char j;
	
	i = 0;
	j = 'a';
	while (i < 16)
	{
		if (i < 10)
		{
		putchar(i + '0');
		}
		if (i > 9)
		{
		putchar(j);
		j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
