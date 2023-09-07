#include"main.h"

/**
 *  *string_nconcat- a function that concatenates two strings.
 * @s1: arguments
 * @s2: arguments
 * @n: arguments
* Return: zeft teen
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
return (NULL);
if (s2 == NULL)
return (NULL);
unsigned int i = 0, z = 0, j = 0;
for (; s1[i] != '\0'; i++)
;
for (; s2[j] != '\0'; j++)
;
if (n < j)
char *x = malloc(size of(char) * (i + n + 1));
else
char *x = malloc(size of(char) * (i + j + 1));
if (!x)
return (NULL);
if (n > j)
n = j;
for (; z < i + n; z++)
{
if (z < i)
x[z] = s1[z];
else
{
x[z] = s2[z - i];
}
}
x[z] = '\0';
return (x);
}
