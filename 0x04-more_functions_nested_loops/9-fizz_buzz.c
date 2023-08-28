#include "main.h"

/**
* main - print numbers from 1 to 100 followed by new line
*           if num divisble by 3 print Fizz
*           if num divisble by 5 print Buzz
*           if number divisble by 3 and 5 print FizzBuzz
*           each number and word should be separated by a space
* Return: Always 0 (success)
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && !(i % 5 == 0))
{
printf("Fizz");
}
else if ((i % 5 == 0) && !(i % 3 == 0))
{
printf("Buzz");
}
else if ((i % 5 == 0) && (i % 3 == 0))
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
printf(" ");
else
printf("\n");
}
return (0);
}
