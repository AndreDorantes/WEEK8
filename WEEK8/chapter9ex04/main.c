#include <stdio.h>
#include <stdlib.h>


int array_hash(char chars[]) {
	int i;              
	int hash=0;       
	for (i=0; i<sizeof(chars); ++i) {
		hash+=chars[i];
	}
	return(hash);
}

int main(void) {
	char char_array[] = {'z', 'g', 'u', 'w', 'p'};
	printf("Result: %d\n", array_hash(char_array));

	getch();
	return(0);
}
