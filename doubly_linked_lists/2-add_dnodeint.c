#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_dnodeint - function that prints all the elements
 *@head: header node
 *@n: value to new node
 *Return: pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;

	if ((*head) == NULL)
		*head = newnode;
	else
	{
		newnode->next = *head;
		newnode->prev = NULL;
		(*head)->prev = newnode;
		*head = newnode;
	}


	return (newnode);
}
