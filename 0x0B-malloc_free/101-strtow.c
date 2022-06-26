#include "main.h"
/**
*_strlen - find length of a string
*@s: string
*Return: int
*/
int _strlen(char *s)
{
int s = 0;
for (; s[s] != '\0'; s++)
;
return (s);
}
/**
**str_concat - concatenates two strings
*@s1: string 1
*@s2: string 2
*Return: pointer
*/
char *str_addChar (char *str, char c)
{
int s, k;
char *m;
s = _strlen(str);

m = malloc((s + 1) * sizeof(char) + 1);
if (m == 0)
	return (0);

for (k = 0; k <= s; k++)
	m[k] = str[k];

m[i + 1] = c;
m[i + 2] = '\0';
return (m);
}
/**
**nbr_spaces - return the number of occurent of a string
*@s: string to check
*Return: int
*/
unsigned int nbr_spaces(char *s)
{
	int k, cmpt = 0;

	for (k = 0; s[k + 1] != '\0'; k++)
	{
		if (s[k]  == ' ' && s[k + 1] != ' ')
			cmpt++;
	}

	return (cmpt + 1);
}
