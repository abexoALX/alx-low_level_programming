#include "main.h"
/**
*puts2 - prints a string, followed by a new line using pointer,
*@str: pointer to the string to print
*Return: void
*/
void puts2(char *str)
{
int j = 0;
while (str[j] )
{
	if (j % 2 == 0)
	{
		_putchar(str[j]);
	}

	j++;
}
_putchar('\n');
}
