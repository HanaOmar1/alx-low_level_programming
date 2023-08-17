#include "main.h"

/**
*   print_most_numbers - print the numbers from 0-9 except 2-4
*
*
* Return: Always 0 (success)
*/

void print_most_numbers(void)
{
int i;
for (i = 48;  i <= 57; i++)
{
if (i == 50 || i == 52)
{
i++;
}
_putchar(i);
}
_putchar('\n');
}
