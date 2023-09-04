#include"main.h"
/**
 * *_strdup - a function that returns a pointer to a
 *           newly allocated space in memory, which contains
 *           a copy of the string given as a parameter.
 * @str: copy of the string
 * Return: 0
*/

char *_strdup(char *str)
{
int i = 0, size;
char *m;
if (str == NULL)
return (NULL);
for (size = 0; str[size] != '\0'; size++)

m = malloc(size * sizeof(*str) + 1);

if (m == 0)
return (NULL);
else
{
for (; i < size; i++)
m[i] = str[i];
}
return (m);

}
