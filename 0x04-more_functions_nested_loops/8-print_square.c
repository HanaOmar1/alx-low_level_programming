#include "main.h"

/**
* print_square - print a square shape using #
*
*@size: the size of the square
*
*Return: Always 0 (success)
*/
void print_square(int size)
{
if (size <= 0)
_putchar('\n');
for (int i = 0; i < size; i++)
{
for (int j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
