#include"main.h"
/**
 * *_strpbrk- a function that searches a string for any of a set of bytes.
 * @s: input
 * @accept: string to mtch
 *
 * Return: pointer to the bytes in the s that matches one of the bytes
 *        or null if no such bytes found
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;
char *z;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
z = &s[i];
return (z);
}
j++;
}
i++;
}
return (0);
}
