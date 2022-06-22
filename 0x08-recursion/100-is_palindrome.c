#include "main.h"
/**
*len - returns the last index of a string (counts the null char)
*@s: pointer the string
*Return: int
*/
int len(char *s)
{
int n = 0;

if (*s > '\0')
	n += len(s + 1) + 1;

return (n);
}
/**
*is_palindrome - check if a string is a palindrome
*@s: string to check
*Return: 0 or 1
*/
int is_palindrome(char *s)
{
int end = len(s);

return (compare(s, 0, end - 1, end % 2));
}
/**
*compare - checker for the palindrome
*@s: string
*@st: int moves from right to left
*@e: int moves from left to right
*@x: int
*Return: 0 or 1
*/
int compare(char *s, int st, int e, int x)
{

if ((st == e && x != 0) || (st == e + 1 && x == 0))
{
	 return (1);
}
else if (s[st] != s[e])
{
	return (0);
}
else
{
	return (compare(s, st + 1, e - 1, x));
}
}
