#include <stdio.h>
#include <stdlib.h>


void replace(char char_array[]) {
	int i;          
	for (i=0; i < sizeof(char_array); ++i) {
		if (char_array[i] == '-') {
			char_array[i] = '_';
		}
	}
}

int main(void) {
	int i;          
	char chars[] = { 't', '-', 'p', '-', '-', 'o', '_' , 'p', '_', '_'};
	replace(chars);
	for (i=0; i < sizeof(chars); ++i) {
		printf("%c ", chars[i]);
	}

	getch();
	return(0);
}
