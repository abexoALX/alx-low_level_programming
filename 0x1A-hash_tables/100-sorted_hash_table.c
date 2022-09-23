#include "hash_tables.h"
/**
*shash_table_create - creates hash table
*@size: size of the table
*Return: new hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *new;
unsigned long int i;
new = malloc(sizeof(shash_table_t));
if (new == NULL)
return (NULL);
new->array = malloc(sizeof(shash_node_t *) * size);
if (new->array == NULL)
return (NULL);
new->size = size;
new->shead = NULL;
new->stail = NULL;
for (i = 0; i < size; i++)
new->array[i] = NULL;
return (new);
}
/**
*shash_table_set - set new value to hash
*@ht: hash table struct
*@key: key to hash
*@value: value of the hash
*Return: 1 if succeeds otherwise 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long x;
shash_node_t *new, *tmp;
shash_node_t *current;
if (ht  == NULL || key == NULL || value == NULL)
return (0);
x = key_index((const unsigned char *)key, ht->size);
current = ht->array[x];
if (current != NULL && strcmp(current->key, key) == 0)
{
current->value = strdup(value);
return (1);
}
new = malloc(sizeof(shash_node_t));
if (new == NULL)
return (0);
new->key = strdup(key);
new->value = strdup(value);

new->next = ht->array[x];
ht->array[x] = new;
if (ht->shead == NULL)
{
new->sprev = NULL;
new->snext = NULL;
ht->shead = new;
ht->stail = new;
}
else if (strcmp(ht->shead->key, key) > 0)
{
new->sprev = NULL;
new->snext = ht->shead;
ht->shead->sprev = new;
ht->shead = new;
}
else
{
tmp = ht->shead;
while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
tmp = tmp->snext;
new->sprev = tmp;
new->snext = tmp->snext;
if (tmp->snext == NULL)
ht->stail = new;
else
tmp->snext->sprev = new;
tmp->snext = new;
}
return (1);
}
/**
*shash_table_get - lookup function
*@ht: shash table struct pointer
*@key: key
*Return: value
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long x;
shash_node_t *current;
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
current = current->snext;
}
return (NULL);
}
/**
*shash_table_print - prints all hash values with key
*@ht: struct poniter
*Return: void
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *temp;
if (ht == NULL)
return;
temp = ht->shead;
printf("{");
while (temp != NULL)
{

printf("'%s': '%s'", temp->key, temp->value);
temp = temp->snext;
if (temp != NULL)
printf(", ");
}

printf("}\n");
}
/**
* shash_table_print_rev - reverse order.
* @ht: struct pointer
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;

if (ht == NULL)
return;

node = ht->stail;
printf("{");
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
node = node->sprev;
if (node != NULL)
printf(", ");
}
printf("}\n");
}
/**
* shash_table_delete - Delete hash table.
* @ht: struct pointer.
*/
void shash_table_delete(shash_table_t *ht)
{
shash_table_t *head = ht;
shash_node_t *node, *tmp;

if (ht == NULL)
return;

node = ht->shead;
while (node)
{
tmp = node->snext;
free(node->key);
free(node->value);
free(node);
node = tmp;
}

free(head->array);
free(head);
}
