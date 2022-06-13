#include "main.h"
/**
*_puts - prints a string, followed by a new line,
*@str: pointer to the string to print
*Return: void
*/
void _puts(char *str)
{
int j = 0;
while (str[j])
{
	_putchar(str[j]);
	j++;
}
_putchar('\n');
}
