#include "main.h"
/**
*print_rev - prints reversed string, followed by a new line
*@s: pointer to the string to print
*Return: void
*/
void print_rev(char *s)
{
int j = 0;
while (s[j])
{
	j++;
}
while (j--)
{
	_putchar(s[j]);
}
_putchar('\n');
}
