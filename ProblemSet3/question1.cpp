/* See README for compilation instructions
 * 
 * C++ program for question 1 of assignment 3
 *
 * Name: Travis Weaver
 * Date: February 25, 2017
 *
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Global variable x

int x;

int testFunc()
{
	x = 21;
	printf("x = %d\n", x);

	/* Local variable x
	 * Once the local variable x is declared in testFunc(), the global variable x cannot
	 * be accessed again.
	 */

	int x;
	x = 42;

	// Print the local variable x

	printf("x = %d\n", x);

	// Print the global variable x using the scope operator (::)

	printf("x = %d\n", ::x);

	return 0;
}

int main(void)
{
	testFunc();

	// Global variable x remains at the value of 21

	printf("x = %d\n", x);

	return(EXIT_SUCCESS);
}