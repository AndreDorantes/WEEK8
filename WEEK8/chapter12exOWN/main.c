#include <stdio.h>
#include <string.h>
void menu();
void sum(int num_a, int num_b, int num_c, int num_d);
void subtraction(int num_a, int num_b, int num_c, int num_d);
void multiplication(int num_a, int num_b, int num_c, int num_d);
void division(int num_a, int num_b, int num_c, int num_d);

 
int main()
{
	menu(); 
 
 	getch();
	return 0;
}
 
void menu(){
 
	int opc; 
	printf("1. Sum");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
 
	printf("\nPlease enter your choice: ");
	fscanf(stdin,"%i" , &opc);
 
	int num_a , num_b, num_c , num_d;
	printf("\nFor a1:: ");
	fscanf(stdin,"%i" , &num_a);
 
	printf("\nFor b1: ");
	fscanf(stdin,"%i" , &num_b);
	
	printf("\nFor a2: ");
	fscanf(stdin,"%i" , &num_c);
	
	printf("\nFor b2: ");
	fscanf(stdin,"%i" , &num_d);
 
	switch (opc)
	{
		case 1: sum(num_a, num_b, num_c, num_d);
		break;
		case 2: subtraction(num_a,num_b, num_c, num_d);
		break;
		case 3: multiplication(num_a,num_b, num_c, num_d);
		break;
		case 4: division(num_a,num_b, num_c, num_d);
		break;
		default:
		printf("Invalid option");
 
	}	
 
}
 
void sum(int num_a, int num_b, int num_c, int num_d)
{
 int f= num_a + num_c;
 int r= num_b + num_d;
printf("The result is: %i + %ii " , f, r);
 
}
 
void subtraction(int num_a, int num_b, int num_c, int num_d)
{
  int f= num_a - num_c;
  int r= num_b - num_d;
printf("The result is: %i  %ii " , f, r);
 
}
  
void multiplication(int num_a, int num_b, int num_c, int num_d)
{
 int f= (num_a*num_c)-(num_b*num_d);
 int r= (num_a*num_d)+(num_b*num_c);
printf("The result is: %i  %ii " , f, r);
 
}
 
void division(int num_a, int num_b, int num_c, int num_d)
{
 int t= num_a*num_c+num_b*num_d;
 int y= num_c*num_c+num_d*num_d;
 int p= num_b*num_c-num_a*num_d;
 int o= num_c*num_c+num_d*num_d;

printf("The result is: %i/%i + %i/%i i" , t, y,p,o);
 
}

