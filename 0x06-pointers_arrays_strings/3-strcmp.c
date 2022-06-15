#include "main.h"
/**
*_strcmp - compares two strings
*@s1: string 1
*@s2: string 2
*Return: 0 if matching, and ns1 - ns2 if not matching
*/
int _strcmp(char *s1, char *s2)
{
int j;
/**
 * We have reached the end of S1 OR we have reached the end of S2
 * 
*/
for (j = 0; s1[j] != '\0' || s2[j] != '\0'; j++)
{
	if (s1[j] != s2[j])
	{
		return (s1[j] - s2[j]);
	}
}
return (0);
}
