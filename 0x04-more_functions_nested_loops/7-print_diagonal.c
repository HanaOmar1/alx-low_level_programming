#include "main.h"

/**
* print_diagonal - print a diagonal line
*
*@n: is the number of times the character \ should
*        be printed
*/
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
for (s = 0; s < n; s++)
{
if (j == i)
_putchar('\\');
else if  (j < i)
_putchar(' ');
}
_putchar('\n');
}

}


}
