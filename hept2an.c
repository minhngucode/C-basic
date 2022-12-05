#include <stdio.h>

int main()
{
	// ax+by=c
	// dx+ey=f
	float a,b,c,d,e,f,x,y;
	printf("a="); scanf("%f", &a);
	printf("b="); scanf("%f", &b);
	printf("c="); scanf("%f", &c);
	printf("d="); scanf("%f", &d);
	printf("e="); scanf("%f", &e);
	printf("f="); scanf("%f", &f);
	y= (f-(d*c)/a)/(e-(b*d)/a);
	x= (c-b*y)/a;
	printf("x= %f \n",x);
	printf("y= %f",y);
	return 0;
}

