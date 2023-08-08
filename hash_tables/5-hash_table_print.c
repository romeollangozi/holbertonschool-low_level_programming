#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints all hash table keys and pairs
 *@ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *it = NULL;
	int first = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < (int) ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (first)
				printf(", ");

			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			first = 1;
		}
	}
	for (i = 0; i < (int) ht->size; i++)
	{
		if (ht->array[i] != NULL)
			it = ht->array[i]->next;

		while (it != NULL)
		{
			printf(", ");
			printf("'%s': '%s'", it->key, it->value);
			it = it->next;
		}
		it = NULL;
	}
	printf("}\n");
}
