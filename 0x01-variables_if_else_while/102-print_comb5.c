#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 <= 98; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 99; digit2++)
{										putchar((digit1 / 10) + '0');	
putchar((digit1 % 10) + '0');							putchar(32);
putchar((digit2 / 10) + '0');					
putchar((digit2 % 10) + '0');
if (digit1 / 10 != 9 || digit1 % 10 != 8)
{
putchar(44);						
putchar(32);
}
}
}
putchar(10);
return (0);
}
