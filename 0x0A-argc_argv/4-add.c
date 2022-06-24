#include <stdio.h>
#include <stdlib.h>
/**
*isInteger - checks if s is an integer
*@s: string to check
*Return: 0 or 1
*/
int isInteger(const char *s)
{
int j = 0;
while (s[j] != '\0')
{
	if (s[j] < '0' || s[j] > '9')
		return (1);
	j++;
}
return (0);
}
/**
*main - adds positive numbers
*@argc: int
*@argv: list
*Return: 0
*/
int main(int argc, char const *argv[])
{
int sum = 0;
while (--argc)
{
	if (isInteger(argv[argc]))
	{
		printf("Error\n");
		return (1);
	}
	sum += atoi(argv[argc]);
}

printf("%i\n", sum);

return (0);
}
