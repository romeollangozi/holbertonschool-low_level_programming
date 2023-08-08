#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 *hash_table_set - function that adds an element to the hash table
 *@ht: hash table
 *@key: key value to the hash node
 *@value: value to the hash node
 *Return: 1 if it succeeded 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *nKey;
	char *nValue;
	unsigned long int index;
	hash_node_t *temp = NULL;
	hash_node_t *it = NULL;
	hash_node_t *newNode = malloc(sizeof(hash_node_t));
	int found = 0;

	if (newNode == NULL || key == NULL || value == NULL)
		return (0);
	nKey = strdup(key);
	nValue = strdup(value);
	newNode->key = nKey;
	newNode->value = nValue;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newNode;
	}
	else
	{
		it = ht->array[index];
		while (it != NULL)
		{
			if (strcmp(it->key, key) == 0)
			{
				it->value = newNode->value;
				found = 1;
			}
			it = it->next;
		}
		if (!found)
		{
			temp = ht->array[index];
			ht->array[index] = newNode;
			ht->array[index]->next = temp;
		}
	}
	return (1);
}
