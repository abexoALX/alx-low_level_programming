#include "main.h"
/**
*_strlen - find the length of a string by using pointer
*@s: pointer to the string to check
*Return: void
*/
int _strlen(char *s)
{
int j = 0;
while (s[j])
{
	j++;
}
return (j);
}
