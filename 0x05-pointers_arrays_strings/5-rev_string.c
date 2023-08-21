#include "main.h"
/**
*  rev_string-  reverses a string.
*
* @s : string input parameter
*
*Return: reversed string
*/

void rev_string(char *s)
{
int len, len1, i;
char tmp[100];
len = 0;
len1 = 0;
while (s[len] != '\0')
{
len++;
}
len1 = len - 1;
for (i = 0; i < len / 2; i++)
{
tmp[i] = s[i];
s[i] = s[len1];
s[len1--] = tmp;

}
}
