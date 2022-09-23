#include "hash_tables.h"
#include <stdio.h>
/**
 *hash_table_print - prints all hash values with key
 *@ht: struct poniter
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
int a = 0;
hash_node_t *temp;
unsigned long int i = 0;
if (ht != NULL)
{
printf("{");
for (i = 0 ; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
if (a != 0)
printf(", ");
printf("'%s': '%s'", temp->key, temp->value);
temp = temp->next;
a = 87;
}
}
printf("}\n");
}
