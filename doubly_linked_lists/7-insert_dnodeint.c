#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position
 *@h: head node;
 *@idx: index to be inserted;
 *@n: n value of the new node
 *Return: addres of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	int i = 0;

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0 && (*h) != NULL)
	{
		newnode->next = *h;
		(*h)->prev = newnode;
		(*h) = newnode;
		return (newnode);
	}
	if ((*h) == NULL)
	{
		(*h) = newnode;
		return (newnode);
	}
	while ((i < (int) idx - 1))
	{
		if (((*h)->next == NULL) && (i < (int) idx - 2))
			return (NULL);
		h = &((*h)->next);
		i++;
	}
	if (i == (int) idx)
	{
		newnode->prev = *h;
		(*h)->next = newnode;
		i++;
	}
	else
	{
		newnode->next = (*h)->next;
		newnode->prev = *h;
		(*h)->next = newnode;
	}

	return (newnode);
}
