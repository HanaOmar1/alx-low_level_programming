#include"main.h"
/**
 *   times_table - prints the time table
*/

void times_table(void)
{
int x, table, prod;
for (table = 0; table <= 9; table++)
{
_putchar(48)
for (x = 0; x <= 9; x++)
{
_putchar(',');
_putchar(' ');
prod = table * x;

if (prod <= 9)
{
_putchar(' ');
}
else
{
_putchar((prod / 10) + 48);
}

_putchar((prod % 10) + 48);
_putchar('\n');
}

}

}
