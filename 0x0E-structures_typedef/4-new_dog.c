#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog- create new dog
 * @name: arg1
 * @age: arg2
 * @owner: arg3
 * Return: a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	l1 = stlen(name);
	k2 = stlen(owner);

	dog->name = stco(name, l1);
	dog->owner = stcp(owner, l2);
	dog->age = age;

	return (dog);
}
/**
 * stlen- length of string
 * @st: the string
 * Return: length
 */
int stlen(char *st)
{
	int l;

	l = 0;

	while (st[l] != '\0')
	{
		l++;
	}
	return (l);
}
/**
 * _strcpy- compy string
 * @dest: destination
 * @src: source
 * Return: a pointer
 */
char *_strcpy(char *dest, char *src)
{
	int l1, i;

	l1 = 0;

	while (src[l1] != '\0')
	{
		l1++;
	}
	for (i = 0; i < l1; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog- intrance
 * @name: arg1
 * @age: arg2
 * @owner: arg3
 * Return: pointer for new dog
 */
dot_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = stlen(name);
	l2 = stlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dot->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

