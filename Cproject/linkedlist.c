#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

Node* create_node(int data)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}	

void append(Node** header_ref, int data)
{
	Node* new_node = create_node(data);

	if (*header_ref == NULL) {
		*header_ref = new_node;
		return;
	}

	Node* last = *header_ref;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
}

/// <summary>
/// insert front of linked list
/// 0 , 1 0 , 2 1 0 
/// </summary>
/// <param name="head_ref">header</param>
/// <param name="data">value</param>
void prepend(Node** head_ref, int data)
{
	Node* new_node = create_node(data);
	if (*head_ref == NULL) {
		*head_ref = new_node;
		return;
	}

	Node* current = *head_ref;
	current->next = new_node;


}

void print_list(Node* head)
{
	Node* current = head;
	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}

void free_list(Node** header_ref)
{
	Node* temp;
	Node* current = *header_ref;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
	}
	*header_ref = NULL;
}
