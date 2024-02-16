#include "hash_tables.h"

/**
 * hash_table_print - This prints the keys and values of the hash table
 *
 * @ht: a pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *tmp;
	char *alx;

	if (ht == NULL)
		return;

	printf("{");
	alx = "";

	for (j = 0; j < ht->size; j++)
	{
		tmp = ht->array[j];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", alx, tmp->key, tmp->value);
			alx = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
