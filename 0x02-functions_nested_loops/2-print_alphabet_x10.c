#include"main.h"
/**
 *  print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{

int ch;
int cnt = 0;
for (cnt = 0; cnt < 10 ; cnt++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}

}
