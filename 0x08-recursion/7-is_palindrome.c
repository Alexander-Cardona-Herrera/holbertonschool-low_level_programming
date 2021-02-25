#include "holberton.h"

/**
 * is_palindrome - evaluate if a string is palindrome
 * @s: a string
 * Return: int
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s) - 1;
	int c = 0;
	
	if (*s == '\0')
		return (1);

	return (palindrome_compare(s, i, c));
}
/**
 * palindrome_compare - use a counter
 * @s: a string
 * @i: a string
 * Return: int
 */
	int palindrome_compare(char *s, int i, int c)
{
	if (s[c] != s [i])
		return (0);
	
	if (s[c] == s [i])
		return (1);

	return (palindrome_compare(s, i - 1, c + 1));
}
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

