#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_node - function that adds a new node at the beginning
 *@head: pointer to head node
 *@str: string value to the new node
 *Return: the addres of the new elemnt
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t length = strlen(str);
	list_t *new = malloc(sizeof(list_t));

	new->str = malloc(sizeof(char) * length);

	if (new == NULL)
		return (NULL);
	strcpy(new->str, str);
	new->len = length;
	new->next = (*head);
	*head = new;

	return (new);

}
