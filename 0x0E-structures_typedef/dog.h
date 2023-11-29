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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
