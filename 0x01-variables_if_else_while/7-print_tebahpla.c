#include <stdio.h>
#include <stdlib.h>
/**
*main - main block
*Description: prints alphabet in reverse order
*starting from z, followed by a new line.
*Return: 0
*/
int main(void)
{

char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}

putchar('\n');

return (0);

}
