#include <stdio.h>
#include <string.h>

struct mail_list {
	char name[100];              
	int address;                
	char street1[100];           
	char street2[100];           
	char city[100];              
	char state[100];              
	int zip;                    
};

void print_list(struct mail_list *mlist);

int main(void) {

	struct mail_list list[100];

	strcpy(list[0].name, "Oscar Andre Dorantes Victor");
	list[0].address = 183;
	strcpy(list[0].street1, "27");
	strcpy(list[0].city, "Merida");
	strcpy(list[0].state, "Yucatan");
	list[0].zip = 97305;

	strcpy(list[1].name, "Ramon Vasaquez");
	list[1].address = 67;
	strcpy(list[1].street1, "56");
	strcpy(list[1].city, "Cholul");
	strcpy(list[1].state, "Yucatan");
	list[1].zip = 97305;

	strcpy(list[2].name, "Juan Monillo");
	list[2].address = 98;
	strcpy(list[2].street1, "32");
	strcpy(list[2].street2, "Centro");
	strcpy(list[2].city, "Merida");
	strcpy(list[2].state, "Yucatan");
	list[2].zip = 97000;

	print_list(list);

	getch();
	return(0);
}

void print_list(struct mail_list *mlist) {

	int i;          

	printf("Mailing list\n\n");

	for (i=0; i < sizeof(mlist); ++i) {
		if (strlen(mlist[i].name) == 0) {
			continue;
		}
		printf("%s\n", mlist[i].name);
		printf("%d %s\n", mlist[i].address, mlist[i].street1);
		if (strlen(mlist[i].street2)) {
			printf("%s\n", mlist[i].street2);
		}
		printf("%s, %s  %d\n\n", mlist[i].city, mlist[i].state, mlist[i].zip);
	}

}
