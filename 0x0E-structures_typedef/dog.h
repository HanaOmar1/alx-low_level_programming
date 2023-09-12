#ifndef dog_h
#define dog_h
/**
* struct dog - a dog struct
* @name: dog's name
* @age: dog's age
* @owner: owner's name
*
* Description: just a lone dog struct in a big kitty world
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif