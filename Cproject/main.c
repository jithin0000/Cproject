#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {

	Node* head = NULL;

	for (size_t i = 0; i < 10; i++)
	{
		append(&head, i);
	}
	print_list(head);
	free_list(&head);
	
	return 0;
}