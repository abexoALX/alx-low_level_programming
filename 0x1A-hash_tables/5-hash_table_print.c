#include "hash_tables.h"
/**
*hash_table_get - lookup function
*@ht: hash table struct pointer
*@key: key
*Return: value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long x;
hash_node_t *current;
if (ht  == NULL || key == NULL)
return (NULL);
x = key_index((const unsigned char *)key, ht->size);
current = ht->array[x];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
return (current->value);
}
current = current->next;
}
return (NULL);
}
