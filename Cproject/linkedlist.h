#ifndef LINKEDLIST_H
#define LINKEDLIST_H
typedef struct {
	int data;
	struct Node* next;
} Node;

Node* create_node(int data);
void append(Node** head_ref, int data);
void prepend(Node** head_ref, int data);
void print_list(Node* head);
void free_list(Node** head);


#endif;
