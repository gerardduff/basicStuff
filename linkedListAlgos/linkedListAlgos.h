#ifndef LINKEDLISTALGOS_H_
#define LINKEDLISTALGOS_H_


typedef struct node{
	int data;
	struct node *next;
}linkedListNode_t;

void printLinkedList(linkedListNode_t *node);
void addToList(linkedListNode_t **head, int data);
void addArrayToList(linkedListNode_t **head, int data[], int size);
void deleteList(linkedListNode_t **head);
#endif 
