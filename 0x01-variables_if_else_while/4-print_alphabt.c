#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: print the alphabet letters except e and q
 *
 *  Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
{
ch++;
continue;
}

putchar(ch);
ch++;
}

putchar('\n');

return (0);
}
