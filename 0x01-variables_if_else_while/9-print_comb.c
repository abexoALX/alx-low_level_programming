#include <stdio.h>
#include <stdlib.h>
/**
*main - main block
*Description:prints all possible combinations of single-digit numbers
*starting from 0, followed by a new line.
*Return: 0
*/
int main(void)
{	
int c = 0;
while (c <= 9)
{
putchar(48 + c);

if (c != 9)
{
putchar(',');
}

c++;
}

putchar('\n');
return (0);
}
