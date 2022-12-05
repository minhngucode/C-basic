#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,x1,x2,D;
	printf("a = (a khac 0)"); scanf("%f", &a);
	printf("b ="); scanf("%f", &b);
	printf("c ="); scanf("%f", &c);
	D=b*b-4*a*c;
	x1=(-b+sqrt(D))/(2*a);
	printf("x1= %f\n", x1);
	x2=(-b-sqrt(D))/(2*a);
	printf("x2= la %f", x2);
	return 0;
}

