#include<unistd.h>
#include "main.h"

/**
 *  isLower - determines whether ascii is lowercase.
 * @c: character
 *
 *  Return: 1 if true, 0 if false
*/
int isLower(char c)
{
return (c >= 97 && c <= 122);
}


/**
 *  isDelimiter - determines whether ascii is delimiter.
 * @c: character
 *
 *  Return: 1 if true, 0 if false
*/
int isDelimiter(char c)
{
int i;
char d[] = " \t\n,.!?\"()()";
for (i = 0; i < 12; i++)
{
if (c == d[i])
return (1);
}
return (0);
}

/**
 *  *cap_string - capitalizes all words of a string.
 * @s: input string
 *
 *  Return: string with capitalized words
*/

char *cap_string(char *s)
{
char *ptr = s;
int found = 1;

while (*s)
{
if (isDelimiter(*s))
found = 1;
else if (isLower(*s) && found)
{
*s -= 32;
found = 0;
}
else
found = 0;
s++;
}

return (ptr);

}
