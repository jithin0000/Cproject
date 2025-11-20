#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "array_list.h"

int main() {

	arraylist* a = create_array_list(2);
	for (size_t i = 0; i < 5; i++)
	{
		add_to_array(a, i + 10);
	}

	for (size_t i = 0; i < 5; i++)
	{
		printf("Item in index %d is : %d \n ", i, get_item_from_array(a, i));
	}

	remove_from_array(a, 1);
	printf("Remove item from array at index 1 , new item at index 1 should be 12 == %d  \n", 
		get_item_from_array(a, 1));

	printf("Total size of the array : %d \n", a->size);


	free_array_list(a);

}