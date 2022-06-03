#include <stdio.h>
#include <stdlib.h>
/**
*main - main block
*Description: prints all single digit numbers of hexadecimal
*starting from 0, followed by a new line.
*Return: 0
*/
int main(void)
{

char d = '0';
char a = 'a';


while (d <= '9')
{
putchar(d);
d++;
}

while (a <= 'f')
{
putchar(a);
a++;
}

putchar('\n');

return (0);

}
