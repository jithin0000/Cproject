#include "array_list.h"
#include <stdio.h>
#include <stdlib.h>

arraylist* create_array_list(int capacity)
{
	arraylist* a = (arraylist*)malloc(sizeof(arraylist));
	a->capacity = capacity > 0 ? capacity : ARRAY_CAPCITY;
	a->size = 0;
	a->data = (int*)calloc(capacity, sizeof(int));
	return a;

}

void add_to_array(arraylist* a, int item)
{
	// add item end of the array
	if (a->size >= a->capacity / 2)resize_array_list(a);
	// when array is full , resize
	a->data[a->size++] = item;
}

int get_item_from_array(arraylist* a, int index)
{
	if (index < 0 || index >= a->size)
	{
		printf("invalid index \n");
		return -1;
	}

	return a->data[index];
}

void resize_array_list(arraylist* a)
{
	int new_capacity = 2 * a->capacity;
	int* data = (int*)realloc(a->data, sizeof(int) * new_capacity);

	a->data = data;
	a->capacity = new_capacity;
}

void remove_from_array(arraylist* a, int index)
{
	if (index < 0 || index >= a->size)
	{
		printf("invalid index \n");
		return -1;
	}

	for (size_t i = index; i < a->size; i++)
	{
		a->data[i] = a->data[i + 1];
	}

	a->size--;

}

void free_array_list(arraylist* a)
{
	free(a->data);
	free(a);
}
