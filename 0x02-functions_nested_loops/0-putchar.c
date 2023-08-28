<<<<<<< HEAD
#include<unistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c:  the character to print
 *
 *  Return:  on success 1.
 *                   on error , -1 is returned and errno is set appropriately .
*/

int _putchar(char c)
{
return (write(1, &c, 1));
=======
#include "main.h"
/**
 *  main - Entry point
 *
 *  Description: prints _putchar using putchar prototype
 *
 *  Return: Always 0 (Success)
*/

int main(void)
{
char str[] = "_putchar";
int ch;
for (ch = 0; ch < 8; ch++)
_putchar(str[ch]);
_putchar('\n');
return (0);
>>>>>>> 3f6c1fe65022d2ed7eff0d7710d544002814f909
}
