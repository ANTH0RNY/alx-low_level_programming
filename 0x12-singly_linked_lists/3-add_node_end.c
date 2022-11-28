#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - length of the string
 * @str: input string
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - add the node to the sll
 * @head: pointer to the string
 * @str: input string
 *
 * Return: pointer to the current node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *hold;

	if (str == NULL)
		return (NULL);
	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);
	current->str = strdup(str);
	if (current->str == NULL)
	{
		free(current);
		return (NULL);
	}
	current->len = _strlen(current->str);
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	hold = *head;
	while (hold->next)
		hold = hold->next;
	hold->next = current;
	return (current);
}
