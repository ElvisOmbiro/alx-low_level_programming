#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with
 * key in a hash table.
 * @ht: pointer to the hash table.
 * @key: key to get the value of.
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int kj;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	kj = key_index((const unsigned char *)key, ht->size);
	if (kj >= ht->size)
		return (NULL);

	node = ht->array[kj];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
