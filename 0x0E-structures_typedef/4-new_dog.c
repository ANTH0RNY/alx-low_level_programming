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
	unsigned int hold, holder, i;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (hold = 0; name[hold]; hold++)
		;
	hold++;
	d->name = malloc(hold * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < hold; i++)
		d->name[i] = name[i];
	d->age = age;
	for (holder = 0; owner[holder]; holder++)
		;
	holder++;
	d->owner = malloc(holder * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < holder; i++)
		d->owner[i] = owner[i];
	return (d);
}
