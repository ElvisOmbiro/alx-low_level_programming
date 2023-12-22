#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *dk;
	unsigned long int r;

	dk = malloc(sizeof(hash_table_t));
	if (dk == NULL)
		return (NULL);

	dk->size = size;
	dk->array = malloc(sizeof(hash_node_t *) * size);
	if (dk->array == NULL)
		return (NULL);
	for (r = 0; r < size; r++)
		dk->array[r] = NULL;

	return (dk);
}
