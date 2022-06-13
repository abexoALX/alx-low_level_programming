#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main block entry
*Description program that generates key 
*Return 0 
*/
int main(void)
{
int j;

srand(time(0));
j = rand();
printf("%i\n", j);
return (0);
}
