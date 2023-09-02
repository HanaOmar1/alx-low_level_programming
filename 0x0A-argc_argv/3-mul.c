#include <stdio.h>
/**
 * main- a program that multiplies two numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int res, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
res = num1 *num2;
printf("%d\n", res);

return (0);

}
