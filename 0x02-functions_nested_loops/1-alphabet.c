#include"main.h"
/**
 * print_alphabet - utilizes on the _putchar fuction to print
 *                 the alphabet  in lowercase followed by a new line
*/

void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch < 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
