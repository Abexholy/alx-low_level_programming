#include "hash_tables.h"

/**
 * add_n_hash - This adds a node at the beginning of a hash
 *
 * @head: The head of hash list
 * @key: The key to the hash
 * @value: value to be stored
 * Return: The head of the hash
 */
hash_node_t *add_n_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = *head;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *head;
	*head = tmp;

	return (*head);
}

/**
 * hash_table_set - This adds a hash (key, value) to a given hash table
 *
 * @ht: A pointer to the hash table
 * @key: The key of the hash
 * @value: value to be stored
 * Return: 1 if successful and 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_index = key_index((unsigned char *)key, ht->size);

	if (add_n_hash(&(ht->array[k_index]), key, value) == NULL)
		return (0);

	return (1);
}
