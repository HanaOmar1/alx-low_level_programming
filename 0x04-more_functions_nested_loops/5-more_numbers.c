#include "main.h"

/**
* more_numbers  - print the numbers from 0-14 10 times
*
*
* Return: Always 0 (success)
*/

void more_numbers(void)
{
int i, z, num;
for (i = 0; i < 10; i++)
{
for (z = 0; z <= 14; z++)
{
num = z;
if (z > 9)
{
_putchar(1 + 48);
num = z % 10;
}
_putchar(num + 48);
}
_putchar('\n');
}
}
