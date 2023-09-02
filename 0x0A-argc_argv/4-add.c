#include <stdio.h>
/**
 * _atoi- converts a string to an integer
 * @str: string to be converted
 * Return: the int converted from string
 */
int _atoi(const char *str)
{
int result = 0;
int sign = 1;
int i = 0;

if (str[0] == '-')
{
sign = -1;
i = 1;
}

for (; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')
{
return (0);
}

result = result * 10 + str[i] - '0';
}

return (result *sign);
}
/**
 * main- a program that adds two numbers
 * @argc: int
 * @argv: list
 * Return: 0 (success), 1 (Error)
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
res = num1 + num2;
printf("%d\n", res);

return (0);

}
