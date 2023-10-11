#ifndef DOG_H
#define DOG_H

/**
 *struct dog - this is an animal
 *@name : name of the dog
 *@age : age of the dog
 *@owner : the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog
{
	char *name;
        float age;
        char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
