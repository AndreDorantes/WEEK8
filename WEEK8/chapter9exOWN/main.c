#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	float a,b,c,d,e,f,g,h,w,q,t;
	float v,y,u,i,o,p,z,x,m,j,r;
	printf("This calculator resolves syntetic divitions up to ^6\n");
	printf("Introduce the coefficients from the biggest to samllest:\n");
	printf("\n for x^6: ");
	fscanf(stdin,"%f",&a);
	printf("\n for x^5: ");
	fscanf(stdin,"%f",&b);
	printf("\n for x^4: ");
	fscanf(stdin,"%f",&c);
	printf("\n for x^3: ");
	fscanf(stdin,"%f",&d);
	printf("\n for x^2: ");
	fscanf(stdin,"%f",&e);
	printf("\n for x^1: ");
	fscanf(stdin,"%f",&f);
	printf("\n for the independent: ");
	fscanf(stdin,"%f",&g);
	printf("\nThe coefficient of the divider\n");
	fscanf(stdin,"%f",&h);
	q=h*(-1);
	v=a*q;
	t=b+v;
	y=t*q;
	u=c+y;
	i=u*q;
	o=d+i;
	p=q*o;
	z=e+p;
	x=q*z;
	m=f+x;
	j=m*q;
	r=g+j;
	printf("\nThe procedure is: \n");
	printf("        %.3f  %.3f  %.3f  %.3f  %.3f  %.3f  %.3f \n", a,b,c,d,e,f,g);
	printf("%.3f        %.3f  %.3f  %.3f  %.3f  %.3f  %.3f  \n", q,v,y,i,p,x,j);
	printf("        %.3f  %.3f  %.3f  %.3f  %.3f  %.3f  %.3f ", a,t,u,o,z,m,r);
	printf("\nThe results are: \n");
	printf("%.3f(x^5) %.3f(x^4) %.3f(x^3) %.3f(x^2) %f(x) %.3f residue %.3f ", a,t,u,o,z,m,r);
	
	getch();
	return 0;
}
