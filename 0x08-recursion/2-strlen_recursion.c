#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: input string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
int cnt = 0;
if (*s)
{
cnt++;
cnt += _strlen_recursion(s + 1);
}
return (cnt);
}
