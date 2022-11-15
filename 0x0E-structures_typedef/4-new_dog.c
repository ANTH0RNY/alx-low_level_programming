#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the
 * Return: dog_t point
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *g;

	if (name == NULL || owner == NULL)
		return (NULL);
	g = malloc(sizeof(dog_t));
	if (g == NULL)
		return (NULL);
	g->name = name;
	g->age = age;
	g->owner = owner;

	return (g);
}
