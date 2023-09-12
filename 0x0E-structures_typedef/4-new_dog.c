#include "dog.h"
#include <stdlib.h>

/**
* _strlen- returns the length of a string
* @str: string to evaluate
*
* Return: the length of the string
*/
int _strlen(const char *str)
{
int length = 0
while (*str++)
{
length++;
}
return (length);
}

/**
* _strcpy- copies a string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointed to the buffer in which we copy string
* @src: string to be copied
* Return: the pointer to dest
*/

char _strcpy(char *dest, char *src)
{
int i;
for (i = 0; s[i]; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: the pointer to the new dog (sucess)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = _strcpy(dog->name, name);
dog->owner = _strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
