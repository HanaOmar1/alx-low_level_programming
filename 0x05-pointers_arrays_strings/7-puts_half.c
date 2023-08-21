#include "main.h"
/**
*  puts_half -   prints half of a string, followed by a new line.
*
* @str : string input parameter
*
*Return: nothing
*/

void puts_half(char *str)
{
int len;
len = 0;
while (str[len] != '\0')
{
len++;
}

len++;
for (len /= 2; str[len] != '\0'; len++)
_putchar(str[len]);
_putchar('\n');


}
