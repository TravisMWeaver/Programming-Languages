#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
	int inBoundsInt;
	int outOfBoundsInt;
	int myArray[5] = {0, 1, 2, 3, 4};
	inBoundsInt = myArray[2];
	outOfBoundsInt = myArray[5];

	printf("myArray[2] = %d\n", inBoundsInt);
	printf("myArray[5] = %d\n", outOfBoundsInt);

	return(EXIT_SUCCESS);
}