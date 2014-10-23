#include <stdio.h>
#include "arrayFuncs/arrayFuncs.h"
#include "sortAlgos/sortAlgos.h"

int main()
{
	int sizeArray = 0;
	int *a;
	
	printf("running main function..\n");
	sizeArray = getArraySize(MAX_ARRAY_SIZE);
	
	int arrayBuffer[MAX_ARRAY_SIZE];
	a=getArrayValues(arrayBuffer, sizeArray);
		
	printArray(arrayBuffer, sizeArray);
	//insertSort(arrayBuffer, sizeArray);
	shellSort(arrayBuffer,sizeArray);
	printArray(arrayBuffer, sizeArray);
	return 0;
}
