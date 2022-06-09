#include "main.h"
/**
*print_line - check for a digit
*@n : number of _ to be printed
*Return:void
*/
void print_line(int n)
{

	int k = 0;

	while (k < n && n > 0)
	{
		_putchar('_');
		k++;
	}
	_putchar('\n');

}
