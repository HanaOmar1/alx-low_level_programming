#include "main.h"

/**
* _isdigit - check if c is a digit between 0-9
*
* @c: input for numbers
*
* Return: 1 if its a digit betwwen 0-9 , 0 if not
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);

}
