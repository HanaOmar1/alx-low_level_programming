#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: print the number from 0-9 using int
 *
 *  Return: Always 0 (Success)
*/

int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
printf("%d", digit);
}
putchar('\n');
return (0);
}
