#include "main.h"
/**
*print_alphabet - Entry point
*Description:function that prints the alphabet, in lowercase
*Return: 0
*/
void print_alphabet(void)
{
char d = 'a';
while (d <= 'z')
{
_putchar(d);
d++;
}
_putchar('\n');
}
