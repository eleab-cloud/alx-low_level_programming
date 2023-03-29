#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner
 *
 * Description: to hold dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
