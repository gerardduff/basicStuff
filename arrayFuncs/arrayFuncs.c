#include "arrayFuncs.h"
#include <stdio.h>
#include <stdlib.h>

/**********************************************
*function to get an array size from the user
**********************************************/
int getArraySize(int maxArraySize)
{
	char arrayStorage[LONG_RANGE];
	int arraySize = maxArraySize + 1;
	char *ptr;

	while((arraySize > maxArraySize) || (arraySize < 0))
	{
		printf("Please enter size of array between 0 and %d \n", 
							maxArraySize);
		fgets(arrayStorage, LONG_RANGE, stdin);
		arraySize = strtol(arrayStorage, &ptr, 10);
	}
	printf("Array Size is %ld \n", arraySize);
	return arraySize;
}


/**********************************************
*function to get an array values from the user
**********************************************/
int *getArrayValues(int buf[], int arraySize)
{
	int i;
	char *ptr;
	char arrayValue[LONG_RANGE];

	for (i = 0; i < arraySize; i++)
	{
		printf("%d Values needed \n",arraySize-i);
		printf("Please enter array value %d \n",i);
		fgets(arrayValue, LONG_RANGE, stdin);
		buf[i] = strtol(arrayValue, &ptr, 10);
	}
	return buf;
}


/**********************************************
*function to print array 
**********************************************/
void printArray(int buf[], int arraySize)
{
	int i;

	for(i = 0; i < arraySize; i++)
		printf("%d, ",buf[i]);
	printf("\n");
}
