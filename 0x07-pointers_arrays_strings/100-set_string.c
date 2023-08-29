#include"main.h"
/**
 *set_string-a function that sets the value of a pointer to a char.
 * @s: pointer to pointer
 * @to: pointer char
*/

void set_string(char **s, char *to)
{
int i = 0;
while (s[i] != '\0')
{
to[i] = s[i];
i++;
}
}
