/* See README for compilation instructions
 * 
 * C program for question 2 of assignment 3
 *
 * Name: Travis Weaver
 * Date: February 25, 2017
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int staticArray()
{
	static int statArr[5000];

	int i;
	for(i = 0; i < 5000; i++)
	{
		statArr[i] = rand() % 5000;
	}

	return 0;
}

int stackArray()
{
	int stackArr[5000];

	int i;
	for(i = 0; i < 5000; i++)
	{
		stackArr[i] = rand() % 5000;
	}

	return 0;
}

int heapArray()
{
	int * heapArr = (int *)malloc(sizeof(int) * 5000);

	int i;
	for(i = 0; i < 5000; i++)
	{
		heapArr[i] = rand() % 5000;
	}

	return 0;
}

int main(void)
{
	srand(time(NULL));
	int i;

	clock_t startTimeStatic = clock();

	for(i = 0; i < 100000; i++)
	{
		staticArray();
	}

	clock_t endTimeStatic = clock();
	double totalTimeStatic = (double)(endTimeStatic - startTimeStatic) / CLOCKS_PER_SEC;
	printf("Time for static array %f seconds.\n", totalTimeStatic);

	clock_t startTimeStack = clock();

	for(i = 0; i < 100000; i++)
	{
		stackArray();
	}

	clock_t endTimeStack = clock();
	double totalTimeStack = (double)(endTimeStack - startTimeStack) / CLOCKS_PER_SEC;
	printf("Time for stack array %f seconds.\n", totalTimeStack);

	clock_t startTimeHeap = clock();

	for(i = 0; i < 100000; i++)
	{
		heapArray();
	}

	clock_t endTimeHeap = clock();
	double totalTimeHeap = (double)(endTimeHeap - startTimeHeap) / CLOCKS_PER_SEC;
	printf("Time for heap array %f seconds.\n", totalTimeHeap);

	return(EXIT_SUCCESS);
}