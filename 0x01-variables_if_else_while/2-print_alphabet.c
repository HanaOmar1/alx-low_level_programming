#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
