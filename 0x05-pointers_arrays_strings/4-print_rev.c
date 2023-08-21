#include "main.h"
/**
*print_rev- prints a string, in reverse, followed by a new line
*
* @s : string input parameter
*
*Return: nothing
*/

void print_rev(char *s)
{
int cnt = 0;
while (*s != '\0')
{
cnt++;
}
int i;
for (i = cnt - 1; i <= 0 ; i--)
{
_putchar(*s + 0);
}

_putchar('\n');
}
