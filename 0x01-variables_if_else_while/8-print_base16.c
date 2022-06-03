#include <stdo.h>
#include <stdlib.h>
/**
*main - main block
*Description: prints all single digit numbers of hexadecimal
*starting from 0, followed by a new line.
*Return: 0
*/
int main(void)
{

char digit = '0';

while (digit <= '9')
{
putchar(digit);
digit++;
}

char nex = 'a';

while (nex <= 'f')
{
putchar(nex);
nex++;
}

putchar('\n');

return (0);

}
