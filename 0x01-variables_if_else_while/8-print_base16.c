#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Description: print number of base 16 in lowecase
 *
 *  Return: Always 0 (Success)
*/

int main(void)
{
int digit;

for (digit = 48; digit <= 102; digit++)
{
putchar(digit);
if (digit == 57)
{
digit = digit + 39;
}
digit++;
}

putchar('\n');

return (0);
}
