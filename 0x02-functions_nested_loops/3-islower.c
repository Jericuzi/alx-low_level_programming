#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: letter being checked
 * Return: always 0 or 1
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
