#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 *create_snode - function that creates a hash node
 *@key: key
 *@value: value
 *Return: pointer to the node
 */

shash_node_t *create_snode(const char *key, const char *value)
{
	shash_node_t *newNode = malloc(sizeof(shash_node_t));


	if (newNode == NULL)
		return (NULL);

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	return (newNode);
}
/**
 * skey_exists - function that searches ofr a key in a hashmap
 * @ht: table to search for
 * @index: index
 * @key: key
 * Return: 1 if there is a key with the same name or 0 if not
 */
int skey_exists(shash_table_t *ht, unsigned long int index, const char *key)
{
	shash_node_t *it = NULL;
	int n = 0;

	if (ht->array[index] == NULL)
		return (0);

	if (strcmp(ht->array[index]->key, key) == 0)
	{
		return (1);
	}
	else
	{
		it = ht->array[index];

		while (it != NULL)
		{
			n++;
			if (strcmp(it->key, key) == 0)
				return (n);
			it = it->next;
		}
	}

	return (0);

}
/**
 *shash_table_set - function that adds an element to the hash table
 *@ht: hash table
 *@key: key value to the hash node
 *@value: value to the hash node
 *Return: 1 if it succeeded 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{	
	unsigned long int index;
	shash_node_t *it;
	shash_node_t *temp;
	shash_node_t *new;
	int n;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	n = skey_exists(ht, index, key);
	
	if (n == 1)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}
	else if (n > 1)
	{
		n = n - 1;
		it = ht->array[index];
		while (n > 0)
			it = it->next;

		free(it->value);
		it->value = strdup(value);
		return (1);
	}
	
	new = create_snode(key, value);
	
	if (new == NULL)
		return (0);


	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		temp = ht->array[index];
		new->next = temp;
		ht->array[index] = new;
	}

	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	else
	{
		if (strcmp(ht->shead->key, key) >= 0)
		{
			temp = ht->shead;
			new->snext = temp;
			temp->sprev = new;
			ht->shead = new;
			return (1);
		}
		
		it = ht->shead;

		while (it != NULL)
		{
			if (strcmp(it->key, key) >= 0)
			{
				new->snext = it;
				new->sprev = it->sprev;
				it->sprev->snext = new;
				it->sprev = new;
				return (1);
			}
			it = it->snext;
		}
		if (strcmp(ht->stail->key, key) <=0)
		{
			temp = ht->stail;
			new->sprev = temp;
			temp->snext = new;
			ht->stail = new;
			return (1);
		}
	}


	return (1);

}

/**
 * shash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);

	return (table);
}
/**
 * free_snodes - function that deletes hash nodes
 * @node: pointer to node
 */
void free_snodes(shash_node_t *node)
{
	if (node == NULL)
		return;

	if (node->snext != NULL)
	{
		free_snodes(node->snext);
	}

		free(node->key);
		free(node->value);
		free(node);

}
/**
 *shash_table_delete - function that deletes a hash table
 *@ht: pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	free_snodes(ht->shead);
	free(ht->array);
	free(ht);
}
/**
 * shash_table_get - function that retrieves a value associated with a key
 * @ht: hash table pointer
 * @key: key to search for
 * Return: the value associated with the elemnt or NULL if key
 * couldn't be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int index;
	shash_node_t *it;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	else
	{
		it = ht->array[index];
		while (it != NULL)
		{
			if (strcmp(it->key, key) == 0)
				return (it->value);
			it = it->next;
		}
	}

	return (NULL);

}

/**
 * shash_table_print - function that prints all hash table keys and pairs
 *@ht: hash table to be printed
 */

void shash_table_print(const shash_table_t *ht)
{
	int i;
	shash_node_t *it = NULL;
	int notfirst = 0;

	if (ht == NULL)
	{
		return;
	}
	it = ht->shead;

	printf("{");
	while (it != NULL)
	{
		if (notfirst)
			printf(", ");

			printf("'%s': '%s'", it->key, it->value);
			notfirst = 1;
			it = it->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function that prints in rev all hash table keys and pairs
 *@ht: hash table to be printed
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	int i;
	shash_node_t *it = NULL;
	int notfirst = 0;

	if (ht == NULL)
	{
		return;
	}
	it = ht->stail;

	printf("{");
	while (it != NULL)
	{
		if (notfirst)
			printf(", ");

			printf("'%s': '%s'", it->key, it->value);
			notfirst = 1;
			it = it->sprev;
	}
	printf("}\n");
}
