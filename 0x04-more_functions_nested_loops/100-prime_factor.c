#include <stdio.h>
/**
*main - prime numbers
*Return: Always 0.
*/
int main(void)
{
unsigned int long n = 612852475143, a;
a = n / 2;
while (1)
{

	if (n % a == 0)
	{
		printf("%lu \n", n / a);
		break;
	}
	a--;
}
return (0);
}
