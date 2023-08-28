#include <stdio.h>
/**
* _strlen -gets the length of the string
*
* @s: string input parameter
*
*Return: the length of the string
*/

int _strlen(char *s)
{
int cnt;
for (cnt = 0; *s != '\0'; s++)
{
cnt++;

}
return (cnt);
}
