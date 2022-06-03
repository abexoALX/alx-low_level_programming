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
int digit = 0;
while (digit <= 9)
{
putchar(digit);

if (digit != 9)
{
putchar(',');
}

digit++;
}

putchar('\n');
return (0);
}
