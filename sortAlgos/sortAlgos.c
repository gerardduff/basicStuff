#include "sortAlgos.h"
#include <stdio.h>
void insertSort(int a[], int length)
{
	int i, j, value;

	for(i = 1; i < length; i++)
	{
		value = a[i];
		for(j = i - 1; j >= 0 && a[j] > value; j--)
			a[j + 1] = a[j];
		a[j + 1] = value; 
	}
}

void shellSort(int array[], int arraySize)
{
	int i, j, inc, temp;
	for(inc = arraySize / 2; inc > 0; inc /= 2)
	{
		for(i = inc; i < arraySize; i++)
		{
			temp = array[i];
			for(j = i; j >= inc; j -= inc)
			{
				if (temp < array[j - inc] )
					array[j] = array[j - inc];
				else
					break;
			}
			array[j] = temp;
		}
	}
}
