#include "hash_tables.h"
/**
*hash_table_set - set new value to hash
*@ht: hash table struct
*@key: key to hash
*@value: value of the hash
*Return: 1 if succeeds otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long x;
hash_node_t *new;
hash_node_t *current;
if (ht  == NULL || key == NULL || value == NULL)
return (0);
x = key_index((const unsigned char *)key, ht->size);
current = ht->array[x];
if (current != NULL && strcmp(current->key, key) == 0)
{
current->value = strdup(value);
return (1);
}

new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);
new->key = strdup(key);
new->value = strdup(value);

new->next = ht->array[x];
ht->array[x] = new;
return (1);
}
