#pragma once
#define ARRAY_CAPCITY 10;
typedef struct {
	int capacity;
	int size;
	int* data;
} arraylist;

arraylist* create_array_list(int capacity);
void add_to_array(arraylist* a, int item);
int get_item_from_array(arraylist* a, int index);
void resize_array_list(arraylist* a);
void remove_from_array(arraylist* a, int index);
void free_array_list(arraylist* a);
