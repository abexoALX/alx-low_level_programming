#include <stdio.h>
/**
*main - main block
*Description: computes and prints the sum of all the multiples of 3 or
*5 below 1024 (excluded), followed by a new line
*Return: 0
*/
int main(void)
{
long int x = 0, y = 1, next;
int i = 0;
while (i < 98)
{
	next = x + y;
	x = y;
	y = next;
	printf("%lu", next);
	if (i < 97)
	{
	printf(", ");
	}
	i++;

}
putchar('\n');
return (0);
}

