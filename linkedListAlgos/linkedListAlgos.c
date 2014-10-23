#include "linkedListAlgos.h"
#include <stdio.h>
#include <stdlib.h>

/********************************************
*print a linked list
*******************************************/
void printLinkedList(linkedListNode_t *node)
{
	while(node!=NULL)
	{
		printf("%d \n",node->data);
		node = node->next;
	}
}

/********************************************
*add an int value to the linked list
*******************************************/
void addToList(linkedListNode_t **head, int data)
{
	linkedListNode_t *newNode = 
			(linkedListNode_t*) malloc(sizeof(linkedListNode_t));
	newNode->data = data;
	newNode->next = (*head);
	(*head)=newNode;
}

/********************************************
*add an array of ints value to the linked list
*******************************************/
void addArrayToList(linkedListNode_t **head, int data[], int size)
{
	int i;

	for (i=0;i<size;i++)
		addToList(head,data[i]);
}

/********************************************
*delete linked list
*******************************************/
void deleteList(linkedListNode_t **head)
{
	linkedListNode_t *current= *head;
	linkedListNode_t *next;

	while(current!=NULL)
	{
		next=current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}

