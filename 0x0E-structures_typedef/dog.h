#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Define dog datatype
 *
 *@name: String datatype
 *@age: Float datatype
 *@owner: String datatype
 *
 *Description: Define new datatype 'dog' with three members
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
