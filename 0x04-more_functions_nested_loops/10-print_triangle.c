#include "main.h"

/**
*  print_triangle - print a traingle
*
*@size: the size of the triangle
*
* Return: Always 0 (success)
*/
void print_triangle(int size)
{
if (size <= 0)
_putchar('\n');
else
{
int h, b;
for (h = 1; h <= size; h++)
{
for (b = 1; b <= size; b++)
{
if ((h + b) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
