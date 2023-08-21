#include "main.h"
/**
*  print_rev- prints a string, in reverse, followed by a new line
*
* @s : string input parameter
*
*Return: nothing
*/

void print_rev(char *s)
{
int cnt = 0;
while (s[cnt] != '\0')
{
cnt++;
}
int i = cnt;
int j;
for (j = i - 1; j >= 0 ; j--)
{
_putchar(s[j]);
}

_putchar('\n');
}
