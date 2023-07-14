#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *nodo;
unsigned long int index;

if (key == NULL || ht == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
nodo = ht->array[index];

for (; nodo != NULL; nodo = nodo->next)
{
if (strcmp(nodo->key, key) == 0)
return (nodo->value);
}
return (NULL);
}
