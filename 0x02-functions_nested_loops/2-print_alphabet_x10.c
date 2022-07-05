#include "main'h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
int j = 0;
while (j < 10)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n\);
j++;
}
}
