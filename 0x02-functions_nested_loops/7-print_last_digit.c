#include "main.h"
/**
*print_last_digit - return last digit
*@n : number to cijheck
*Return:0 or 1
*/
int print_last_digit(int n)
{
int last;
n = n >= 0 ? n : n * -1;

last = n % 10;

_putchar(last);
_putchar(last);

return (last);
}
