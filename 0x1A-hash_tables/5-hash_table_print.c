#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	int n = 1;
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!n)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);

			current = current->next;
			n = 0;
		}
	}
	printf("}\n");
}
