#include <stdio.h>
#include <stdlib.h>


int count(int number, int array[], int length) {
	if (length==0) {
		return 0;
	}
	if (array[length-1] ==number) {
		return(1+count(number, array, length-1));
	} else {
		return(count(number, array, length-1));
	}
}

int main(void) {
	int result;

	int nl1[] = { 56, 74, 78, 78, 45, 14, 41, 37, 56, 45 };
	printf("Need: 78\n");
	result = count(78, nl1, sizeof(nl1));
	printf("Have: %d\n", result);

	int nl2[] = { 4, 8, 9, 9, 5, 4, 9, 4, 4, 2, 14, 47, 9, 3, 9, 200, 3 };
	printf("Need: 9\n");
	result = count(9, nl2, sizeof(nl2));
	printf("Have: %d\n", result);

	int nl3[] = { 7, 6, 2, 2, 4, 15, 4, 2, 2, 7, 21 };
	printf("Need: 2\n");
	result = count(2, nl3, sizeof(nl3));
	printf("Have: %d\n", result);

	int nl4[] = { 0, 25, 4, 4, 5, 4, 7, 4, 4, 3, 0, 3, 7 };
	printf("Need: 4\n");
	result = count(4, nl4, sizeof(nl4));
	printf("Have: %d\n", result);

	return(0);
}
