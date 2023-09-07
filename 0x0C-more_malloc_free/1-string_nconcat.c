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
int i = 0, z = 0;
char *x = malloc(sizeof(s1) + n + 1);
for (; s1[i] != '\0'; i++)
;
for (; z < i + n; z++)
{
if (z < i)
x[z] = s1[z];
else
{
x[z] = s2[z - i]
}
}
x[z] = '\0';
return (x);
}
