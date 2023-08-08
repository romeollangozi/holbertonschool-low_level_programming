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
	char *nKey = strdup(key);
	char *nValue = strdup(value);
	unsigned long int index;
	hash_node_t *temp = NULL;
	hash_node_t *newNode = malloc(sizeof(hash_node_t));

	if (newNode == NULL)
		return (0);
	newNode->key = nKey;
	newNode->value = nValue;
	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		ht->array[index] = newNode;
	else
	{
		temp = ht->array[index];
		ht->array[index] = newNode;
		ht->array[index]->next - temp->next;
	}
	return (1);
}
