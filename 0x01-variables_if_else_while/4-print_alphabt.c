#include<stdio.h>
/**
 * main - entry point
 * 
 * Return: always return 0
 */
int main(void)
{

	char c = 'a';

	while (c <= 'z')

	{

		if (c != 'e' && c != 'q')

		{

			putchar(c);

		}

		c++;

	}

	putchar('\n');

	return (0);
}
