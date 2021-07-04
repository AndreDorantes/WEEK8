#include <stdio.h>
#include <stdlib.h>


int high_water_mark(int values[]) {
	int high_mark;      
	int i;              
	high_mark=0;
	for (i=0; i<sizeof(values); ++i) {
		if (values[i] > high_mark) {
			high_mark = values[i];
		}
	}
	return high_mark;
}

int main(void) {
	int values[] = { 9, 9, 654, 741, 55, 663, 25, 123456};
	printf("Result: %d\n", high_water_mark(values));
	
	
	getch();
	return(0);
}

