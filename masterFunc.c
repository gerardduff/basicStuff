#include <stdio.h>
#include "arrayFuncs/arrayFuncs.h"
#include "sortAlgos/sortAlgos.h"
#include "linkedListAlgos/linkedListAlgos.h"

int main()
{
	int sizeArray = 0;
	int *a;
	linkedListNode_t *head=NULL;
	
	printf("running main function..\n");
	sizeArray = getArraySize(MAX_ARRAY_SIZE);
	
	int arrayBuffer[MAX_ARRAY_SIZE];
	a=getArrayValues(arrayBuffer, sizeArray);
		
	printArray(arrayBuffer, sizeArray);
	//insertSort(arrayBuffer, sizeArray);
	shellSort(arrayBuffer,sizeArray);
	printArray(arrayBuffer, sizeArray);
	addArrayToList(&head, arrayBuffer, sizeArray);
	printf("linked list created ..\n");
	printLinkedList(head);
	return 0;
}
